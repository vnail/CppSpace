/*************************************************************************
	> File Name: testRefer.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月02日 星期二 10时42分24秒
 ************************************************************************/

#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;


struct box{
 //   string name;
	int length;
};

void createBox(box **pbox){
	*pbox = (box *)malloc(sizeof(box));

//	(*pbox)->name = "Big";
	(*pbox)->length = 10;
}

int main(){
	box *mypbox;

	createBox(&mypbox);

	return 0;
}
