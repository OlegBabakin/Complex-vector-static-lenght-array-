/*
1. Определить класс CComplexVector для работы с вектором комплексных чисел. Длина вектора задается с помощью оператора #define.
В классе должны быть определены необходимые конструкторы, операторы сложения, вычитания, скалярного умножения.
В отдельном файле должен быть написан тест на данный класс
*/

#ifndef __H_COMPLEX  // recompilation protection
#define __H_COMPLEX
#define N 100000 // Number for random number generator

#include <iostream>
#include <ostream>
#include <time.h>
#include <math.h>

class CComplexVector;

// Complex number class
class Complex_num
{
friend class CComplexVector;
private:
public:
	double Re_;
	double Im_;

	// default constructor for complex number
	Complex_num();
	
    // two number constructor for complex number
	Complex_num(double Re, double Im);
	
    // desructor for complex number
	~Complex_num();
	
    // arithmetic operators for complex number
    Complex_num operator+(const Complex_num &cnum);
	Complex_num operator-(const Complex_num &cnum);
	Complex_num operator*(const Complex_num &cnum);
    void operator=(const Complex_num &cnum);
	
    // output function for complex number
	friend std::ostream& operator << (std::ostream &out, const Complex_num& cnum);
};

#endif
