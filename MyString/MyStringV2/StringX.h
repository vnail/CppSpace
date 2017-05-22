/*************************************************************************
	> File Name: StringX.h
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月22日 星期一 10时24分27秒
 ************************************************************************/
#ifndef __STRINGX_H__
#define __STRINGX_H__

#include<iostream>

class StringX{
	friend std::ostream& operator<<(std::ostream& out,StringX& sx);
	friend std::istream& operator>>(std::istream& in,StringX& sx);
public:
	StringX(const char *s=NULL);
	StringX(const StringX& other);
	~StringX();
	int lengthx() const;
	StringX& operator+(StringX& other);
	StringX& operator+(const char* s);

protected:
private:
	char* x_data;
};


#endif
