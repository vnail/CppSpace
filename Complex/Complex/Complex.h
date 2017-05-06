/*************************************************************************
	> File Name: Complex.h
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月04日 星期四 09时32分03秒
 ************************************************************************/

#ifndef __COMPLEX_H__
#define __COMPLEX_H__

class Complex {
	public:
		Complex(float freal_=0,float fimagin_=0);
		~Complex();
		float GetReal();
		void SetReal(float freal_);
		float GetImagin();
		void SetImagin(float fimagin_);
		void DisplayComplex();
	    Complex operator+(Complex &Comp_);
		Complex operator-(Complex &Comp_);
		Complex operator*(Complex &Comp_);
	private:
		float freal;
		float fimagin;
};


#endif
