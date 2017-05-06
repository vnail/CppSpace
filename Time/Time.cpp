#include "Time.h"
#include <iostream>

using namespace std;

Time::Time(){
	h=0;
	m=0;
	s=0;
};
Time::Time(int h,int m,int s){
	this->h = h;
	this->m = m;
	this->s = s;
};
void Time::set(int h,int m,int s){
		this->h = h;
		this->m = m;
		this->s = s;	
};
int Time::geth(){
	return h;
};
int Time::getm(){
	return m;
};
int Time::gets(){
	return s;
};
void Time::display(){
	cout<<"ʱ�䣺"<<h<<":"<<m<<":"<<s<<endl;
};
bool Time::equal(Time &other_time){
	if((h == other_time.h)&&(m == other_time.m)&&(s == other_time.s))
		return true;
	else
		return false;
};
void Time::increment(){
	s++;
	if(60 <= s)
	{
		s=0;
		m++;
		if(60 <= m){
			m=0;
			h++;
			if(24 <= h){
				h=0;
			}
		}
	}


};
bool Time::less_than(Time &other_time){
	if((h*3600+m*60+s) < ((other_time.h)*3600+(other_time.m)*60+other_time.s))
		return true;
	else 
		return false;
};

