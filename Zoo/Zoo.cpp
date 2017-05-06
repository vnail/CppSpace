/*************************************************************************
	> File Name: Zoo.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年04月22日 星期六 12时33分35秒
 ************************************************************************/

#include<iostream>
#include "Zoo.h"

using namespace std;

Monkey::Monkey(){
	cout<<"Monkey constructor"<<endl;
}

void Monkey::eat(){
	cout << "eat" <<endl;
}

Monkey::~Monkey(){
	cout <<"Monkey xigou"<<endl;
}

