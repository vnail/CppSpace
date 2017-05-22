/*************************************************************************
	> File Name: Main.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月22日 星期一 10时23分18秒
 ************************************************************************/

#include<iostream>
#include"StringX.h"

using namespace std;

int main()
{
	StringX str0;
	StringX str1("Hello StringX");
	StringX* pstr2=new StringX("IcomeFromDump");
	StringX str4 = *pstr2;

//	cin>>str0;
//	cout<<str0.lengthx()<<endl;
//	cout<<*pstr2<<":"<<pstr2->lengthx()<<endl;

	cout<<str4<<endl;
	delete pstr2;
	return 0;
}










