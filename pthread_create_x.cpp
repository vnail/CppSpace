/*************************************************************************
	> File Name: pthread_create_x.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年04月18日 星期二 10时08分01秒
 ************************************************************************/

//tip1:compile and link with -pthread
#include<iostream>
#include<pthread.h>
#include<sys/types.h>
#include<unistd.h>
using namespace std;

pthread_t ntid;
pthread_t ntid2;

void printids(const char *s)
{
	pid_t pid;
	pthread_t tid;

	pid = getpid();
	tid = pthread_self();

	cout << s << "pid:"<<pid<<"tid:"<<tid<<endl;
}

void *thr_fn(void *arg)
{
	printids("new thread: ");
	while(1);
	return 0;
}

void *thr_fn2(void *arg)
{
	printids("new thread2: ");
//	while(1);
	return 0;
}

int main()
{
	int err;

	err = pthread_create(&ntid,NULL,thr_fn,NULL);
	if (err != 0)
		cout<<"failed to pthread_create\n"<<endl;

	err = pthread_create(&ntid2,NULL,thr_fn2,NULL);

	sleep(1);
	cout<< ntid <<endl;
	printids("main thread: ");
	sleep(1);
	while(1);
	return 0;
}

