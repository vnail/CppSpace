/*************************************************************************
	> File Name: static_x.c
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月03日 星期三 10时48分58秒
 ************************************************************************/

#include<stdio.h>

struct A {
	int a;
	static int b=0;
	int c;
};
int main(){

	printf("%d\n",sizeof(struct A));

}
