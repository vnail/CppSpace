/*************************************************************************
	> File Name: TestComplex.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月04日 星期四 09时33分46秒
 ************************************************************************/

#include "Complex.h"
#include<iostream>
using namespace std;

int main(){

	Complex com1(1,2);
	Complex com2(3,4);
    Complex com3(0,0);
	Complex com4(0,0);
	Complex com5;

	com1.DisplayComplex();
	com2.DisplayComplex();
	com3.DisplayComplex();

	com3 = com1 + com2;

	com4 = com2 - com1;
	com5 = com1*com2;

	com3.DisplayComplex();
	com4.DisplayComplex();
	com5.DisplayComplex();


	return 0;
}


