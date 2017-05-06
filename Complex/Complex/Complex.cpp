/*************************************************************************
	> File Name: Complex.cpp
	> Author: wangmingwei
	> E-mail: wmw823@126.com 
	> Created Time: 2017年05月04日 星期四 09时33分28秒
 ************************************************************************/

#include<iostream>
#include "Complex.h"

using namespace std;

Complex::Complex(float freal_,float fimagin_){
	freal = freal_;
	fimagin = fimagin_;
};

Complex::~Complex(){};

float Complex::GetReal(){
	return freal;
};


void Complex::SetReal(float freal_){
	freal = freal_;
};

float Complex::GetImagin(){
	return fimagin;
};

void Complex::SetImagin(float fimagin_){
	fimagin = fimagin_;
};

void Complex::DisplayComplex(){
	cout<<freal<<"+"<<fimagin<<"i"<<endl;
}

Complex Complex::operator+(Complex &Comp_){

    Complex tmpCom(0,0);
	float fRealTmp,fImaginTmp;

	fRealTmp =  Comp_.GetReal() + freal;
	fImaginTmp = Comp_.GetImagin() + fimagin;

    tmpCom.SetReal(fRealTmp);
	tmpCom.SetImagin(fImaginTmp);

	tmpCom.DisplayComplex();

	return tmpCom;

};

Complex Complex::operator-(Complex &Comp_){
	Complex tmpComp;
	float fRealTmp,fImaginTmp;

	fRealTmp = freal - Comp_.GetReal();
	fImaginTmp = fimagin - Comp_.GetImagin();

	tmpComp.SetReal(fRealTmp);
	tmpComp.SetImagin(fImaginTmp);

	tmpComp.DisplayComplex();

	return tmpComp;

};


Complex Complex::operator*(Complex &Comp_){
	Complex tmpComp;
	float fRealTmp,fImaginTmp;

	fRealTmp = freal*Comp_.freal - fimagin*Comp_.fimagin;
	fImaginTmp = freal*Comp_.fimagin + fimagin*Comp_.freal;

	tmpComp.SetReal(fRealTmp);
	tmpComp.SetImagin(fImaginTmp);

	tmpComp.DisplayComplex();

	return tmpComp;
}


















