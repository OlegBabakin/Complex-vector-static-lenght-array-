/*
1. Определить класс CComplexVector для работы с вектором комплексных чисел. Длина вектора задается с помощью оператора #define.
В классе должны быть определены необходимые конструкторы, операторы сложения, вычитания, скалярного умножения.
В отдельном файле должен быть написан тест на данный класс
*/

#include "Complex.h"

// two number constructor for complex number
Complex_num::Complex_num(double Re, double Im)
{
	Re_ = Re;
	Im_ = Im;
}

// default constructor as a two random numbers constructor for complex number
Complex_num::Complex_num()
{
	this->Re_ = (double)(rand()%N)/1000;
	this->Im_ = (double)(rand()%N)/1000; 
}

// destructor for complex number
Complex_num::~Complex_num()
{
	std::cout << "Destructor for complex number\n";
}

// addition operator for complex number
Complex_num Complex_num::operator+(const Complex_num &cnum)
{
	return Complex_num(this->Re_ + cnum.Re_, this->Im_ + cnum.Im_);
}

// subtraction operator for complex number
Complex_num Complex_num::operator-(const Complex_num &cnum)
{
	return Complex_num(this->Re_ - cnum.Re_, this->Im_ - cnum.Im_);
}

// multiplication operator for complex number
Complex_num Complex_num::operator*(const Complex_num &cnum)
{
	Complex_num tmp;
	tmp = Complex_num(this->Re_*cnum.Re_ + this->Im_*cnum.Im_, this->Re_*cnum.Im_ + this->Im_*cnum.Re_);
	return tmp;
}

// assignment operator for complex number
void Complex_num::operator=(const Complex_num &cnum)
{
    this->Re_ = cnum.Re_;
    this->Im_ = cnum.Im_;
}

// output operator for complex number
std::ostream& operator << (std::ostream &out, const Complex_num& cnum)
{
    out << cnum.Re_ << " + " << cnum.Im_ << "i";
    return out;
}
