/*************************************************************************
	> File Name: StringX.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月22日 星期一 10时32分18秒
 ************************************************************************/

#include<iostream>
#include<string.h>
#include"StringX.h"

using namespace std;

StringX::StringX(const char* s){
	if(NULL == s){
		x_data = new char[1];
	//	strncpy(x_data,'\0',1);
		*x_data = '\0';
	}else{
		x_data = new char[strlen(s)+1];
		strncpy(x_data,s,strlen(s)+1);
	}
}

//deep copy
StringX::StringX(const StringX& other){
	int len = other.lengthx();
	this->x_data = new char[len + 1];
	strncpy(this->x_data,other.x_data,len+1);
}
StringX::~StringX(){
	delete[] x_data;
	x_data = NULL;
}
ostream& operator<<(ostream& out,StringX& sx){
	out<<sx.x_data;
	return out;
}

//input length>16bites,core dump,use vector to solve this problem
istream& operator>>(istream& in,StringX& sx){
	in>>sx.x_data;
	return in;
}

int StringX::lengthx() const
{
	return strlen(x_data);
}























