/*************************************************************************
	> File Name: server.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月06日 星期六 12时19分23秒
 ************************************************************************/

#include<stdio.h>
#include<string.h>
#include<iostream>

#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<unistd.h>
#include<event.h>

using namespace std;

#define SERVER_ADDR "127.0.0.1"
#define SERVER_PORT 8888

struct event_base* base;

void onRead(int iCliFd, short iEvent,void *arg)
{
	int iLen;
	char buf[1500];

	iLen = recv(iCliFd,buf,1500,0);

	if(iLen <= 0){
		cout<< "Client Close" <<endl;

		struct event *pEvRead = (struct event*)arg;
		event_del(pEvRead);
		delete pEvRead;

		close(iCliFd);
		return;
	}

	buf[iLen] = 0;
	cout <<"Client Info:" <<buf<<endl;

	struct bufferevent *buf_ev;
	buf_ev = bufferevent_new(iCliFd,NULL,NULL,NULL,NULL);
	buf_ev->wm_read.high = 4096;
	char MESSAGE[] = "welcome to server ...";
	bufferevent_write(buf_ev,MESSAGE,strlen(MESSAGE));
}

void onAccept(int iSvrFd,short iEvent,void *arg)
{
	int iCliFd;
	struct sockaddr_in sCliAddr;

	socklen_t iSinSize = sizeof(sCliAddr);
	iCliFd = accept(iSvrFd,(struct sockaddr*)&sCliAddr,&iSinSize);

	struct event *pEvRead = new event;
	event_set(pEvRead,iCliFd,EV_READ|EV_PERSIST,onRead,pEvRead);
	event_base_set(base,pEvRead);
	event_add(pEvRead,NULL);

	struct bufferevent* buf_ev;
	buf_ev = bufferevent_new(iCliFd,NULL,NULL,NULL,NULL);
	buf_ev->wm_read.high = 4096;
	char MESSAGE[] ="welcome to server...";
	bufferevent_write(buf_ev,MESSAGE,strlen(MESSAGE));

	cout<<"a client connect:"<<iCliFd<<endl;
}


int main()
{
	int iSvrFd;
	struct sockaddr_in sSvrAddr;

	memset(&sSvrAddr,0,sizeof(sSvrAddr));
	sSvrAddr.sin_family = AF_INET;
	sSvrAddr.sin_addr.s_addr = inet_addr(SERVER_ADDR);
	sSvrAddr.sin_port = htons(SERVER_PORT);

	iSvrFd =socket(AF_INET,SOCK_STREAM,0);
	bind(iSvrFd,(struct sockaddr*)&sSvrAddr,sizeof(sSvrAddr));
	listen(iSvrFd,10);

	base = (struct event_base*)event_init();

	struct event evListen;
	event_set(&evListen,iSvrFd,EV_READ|EV_PERSIST,onAccept,NULL);
	event_base_set(base,&evListen);
	event_add(&evListen,NULL);
	event_base_dispatch(base);

	return 0;
}
