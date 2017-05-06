#ifndef __TIME_H__
#define __TIME_H__

class  Time{
public:
	Time();
	Time(int h,int m,int s);
	void set(int h,int m,int s);
	int geth();
	int getm();
	int gets();
	void display();
	bool equal(Time &other_time);
	void increment();
	bool less_than(Time &other_time);
private:
	int h;
	int m;
	int s;
};

#endif