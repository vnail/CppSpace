/*************************************************************************
	> File Name: client.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月06日 星期六 12时47分24秒
 ************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <string.h>
#include <unistd.h>
#include <netdb.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <sys/types.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <event.h>

#define SERVER_ADDR "127.0.0.1"
#define SERVER_PORT 8888

int main(int argc,char **argv) 
{
	int sockfd;
	char buffer[1024];
	struct sockaddr_in server_addr;
	struct hostent *host;
	int portnumber,nbytes;

	if((host=gethostbyname(SERVER_ADDR))==NULL)
	{
		fprintf(stderr,"Gethostname error\n");
		exit(1);
	}

	if((portnumber=SERVER_PORT)<0)
	{
		fprintf(stderr,"Usage:%s hostname portnumber\a\n",argv[0]);
		exit(1);
	}

	if((sockfd=socket(AF_INET,SOCK_STREAM,0))==-1)
	{
		fprintf(stderr,"Socket Error:%s\a\n",strerror(errno));
		exit(1);
	}

	bzero(&server_addr,sizeof(server_addr));
	server_addr.sin_family=AF_INET;
	server_addr.sin_port=htons(portnumber);
	server_addr.sin_addr=*((struct in_addr *)host->h_addr);

	if(connect(sockfd,(struct sockaddr *)(&server_addr),sizeof(struct sockaddr))==-1)
	{
		fprintf(stderr,"Connect Error:%s\a\n",strerror(errno));
		exit(1);
	}

	while(true)
	{
		char MESSAGE[]="hello server...\n";

		if(-1 == (::send(sockfd,MESSAGE,strlen(MESSAGE),0)))
		{
			printf("the net has a error occured...\n");
			exit(1);
		}

		if((nbytes = read(sockfd,buffer,1024))==-1)
		{
			fprintf(stderr,"read error:%s\n",strerror(errno));
			exit(1);
		}

		buffer[nbytes] = '\0';
		printf("I have received:%s\n",buffer);
		memset(buffer,0,1024);

		sleep(2);
	}

	close(sockfd);
	exit(0);
}
