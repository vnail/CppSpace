/*************************************************************************
	> File Name: const_x.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月03日 星期三 09时55分19秒
 ************************************************************************/

#include<iostream>
using namespace std;

int main(){
	const int a=10;
	int *p = &a;

	*p = 20;

	cout << a << endl;

	return 0;
}
