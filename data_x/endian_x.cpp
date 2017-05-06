/*************************************************************************
	> File Name: endian_x.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年04月18日 星期二 19时03分26秒
 ************************************************************************/

#include<iostream>
using namespace std;

union TEST {
	short a;
	char b[2];
};

int main()
{
	union TEST test_endian;

	test_endian.a = 0x1234;

	if((test_endian.b[1] == 0x12)&&(test_endian.b[0] == 0x34))
		cout << "CPU endian: "<<"Little"<<endl;
	if((test_endian.b[1] == 0x34)&&(test_endian.b[0] == 0x12))
		cout << "CPU endian: "<<"Big"<<endl;



	return 0;
}
