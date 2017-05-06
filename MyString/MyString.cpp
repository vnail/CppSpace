#include "MyString.h"
#include <iostream>

using namespace std;

MyString::MyString(const char *str) {
	if(str == NULL){
		m_data = new char[1];
		*m_data = '\0';
	}else {
		int length = strlen(str);
		m_data = new char[length+1]; //length+1的+1是用来存放‘\0’
		strcpy(m_data,str);
	}
}

MyString::~MyString(){
	if (m_data)
	{
		delete[] m_data;
		m_data=0;
	}
}

MyString::MyString(const MyString &other)
{
	if(!other.m_data){
		m_data = 0;
	}
	m_data = new char[strlen(other.m_data)+1];
	strcpy(m_data,other.m_data);
}

MyString & MyString::operator =(const MyString &other) {
	if(this != &other){
		delete[] m_data;
		if(!other.m_data){
			m_data=0;
		}else{
			m_data=new char[strlen(other.m_data)+1];
			strcpy(m_data,other.m_data);
		}
	}
	return *this;
}

MyString & MyString::operator +(const MyString &other){
	MyString newString;
	if(!other.m_data) {
		newString = *this;
	} else if(!m_data){
		newString = other;
	} else {
		newString.m_data = new char[strlen(m_data)+strlen(other.m_data)+1];
		strcpy(newString.m_data,m_data);
		strcat(newString.m_data,other.m_data);
	}

	return newString;
}

bool MyString::operator==(const MyString &other){
	if (strlen(m_data)!=strlen(other.m_data))
	{
		return false;
	} 
	else
	{
		return strcmp(m_data,other.m_data)?false:true;
	}
}

int MyString::getLength(){
	return strlen(m_data);
}
