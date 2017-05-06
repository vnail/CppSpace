/*************************************************************************
	> File Name: data-length_x.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年04月18日 星期二 19时23分34秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
	char chara=1;
	short shorta=1;
	int inta=1;
	long longa=1;
	float floata=1;
	double doublea=1;

	cout<<"char length:"<<sizeof(char)<<endl;
	cout<<"short length:"<<sizeof(short)<<endl;
	cout<<"int length:"<<sizeof(int)<<endl;
	cout<<"long length:"<<sizeof(long)<<endl;
	cout<<"float length:"<<sizeof(float)<<endl;
	cout<<"double length:"<<sizeof(double)<<endl;

	return 0;
}
