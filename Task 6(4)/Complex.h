#ifndef __COMPLEX__
#define __COMPLEX__
#include <iostream>
using namespace std;

struct Complex {
	double re = 0;
	double im = 0;

	void printComplex();
	Complex Sum(Complex n1);
	Complex Minus(Complex n1);
	Complex Multiply(Complex n1);
	Complex Divide(Complex n1);
	double Abs();
		bool operator > (Complex n2);
		double Change_re(double x);
		double Change_im(double y);
};


#endif 


