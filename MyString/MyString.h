#ifndef __MYSTRING_H__
#define __MYSTRING_H__

#include<iostream>

class MyString {
public:
	MyString(const char *str = NULL);
	MyString(const MyString &other);
	~MyString();
	MyString & operator =(const MyString &other);
	MyString & operator +(const MyString &other);
	bool operator ==(const MyString &other);
	int getLength();
private:
	char *m_data;
};

#endif
