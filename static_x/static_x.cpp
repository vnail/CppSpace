/*************************************************************************
	> File Name: static_x.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月03日 星期三 10时24分25秒
 ************************************************************************/

#include<iostream>
using namespace std;

class A {
public:
	static int a;
	int b ;
	int c;

//	void optAa();
//	void optAb();
};

int A::a = 0;

int main(){
	A A_1;
	A A_2;

	A_1.a = A_1.a + 1;

	cout<<A_1.a<<endl;
	cout<<sizeof(A)<<endl;

	
	return 0;
}
