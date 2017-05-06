/*************************************************************************
	> File Name: illegal_memspace.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年04月22日 星期六 17时41分09秒
 ************************************************************************/

#include<iostream>
#include<stdlib.h>

using namespace std;

void func(){
	int *x=(int *)malloc(10*sizeof(int));
	x[10] = 0;
}

int main()
{
	func();
	cout<<"done"<<endl;

	return 0;
}
