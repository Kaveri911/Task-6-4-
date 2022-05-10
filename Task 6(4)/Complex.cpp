#include "Complex.h"

void Complex::printComplex()
{
	cout << this->re;

	if (this->im >= 0)
	{
		cout << "+";
	}
	cout << this->im << "i";
}
Complex Complex::Sum(Complex n1)
{
	string t = "";
	return Complex{ this->re + n1.re,this->im + n1.im };
}
Complex Complex::Minus(Complex n1)
{
	return Complex{ this->re - n1.re,this->im - n1.im };
}
Complex Complex::Multiply(Complex n1)
{
	return Complex{ this->re * n1.re - this->im * n1.im, this->re * n1.im + this->im * n1.re };
}
Complex Complex::Divide(Complex n1)
{
	Complex sopr = { n1.re,-n1.im };
	this->Multiply(sopr);
	double denom = pow(n1.re, 2) + pow(n1.im, 2);
	return Complex{ this->re / denom,this->im / denom };
}
double Complex::Abs()
{
	double a = this->re;
	double b = this->im;
	return (sqrt(a * a + b * b));

}
double Complex::Change_re(double x)
{
	return  re = x;
}

double Complex::Change_im(double y)
{
	return  im = y;
}
bool Complex::operator >(Complex n2)
{
	if (this->Abs() > n2.Abs())
	{
		return 1;
	}

	else
	{
		return 0;
	}
}