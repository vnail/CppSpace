/*************************************************************************
	> File Name: Main.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年04月22日 星期六 12时13分42秒
 ************************************************************************/

#include<iostream>
#include "MyString.h"

using namespace std;

int main()
{
	MyString Str1="HelloMyString";
	MyString Str2("IamStr2");
	MyString Str3=Str2;

	if(Str2 == Str1)
	{
		cout<<"is =="<<endl;
	}else{
		cout<<"is not =="<<endl;
	}

//	cout << Str1 <<endl;

	return 0;
}
