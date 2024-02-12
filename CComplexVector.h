/*
1. Определить класс CComplexVector для работы с вектором комплексных чисел. Длина вектора задается с помощью оператора #define.
В классе должны быть определены необходимые конструкторы, операторы сложения, вычитания, скалярного умножения.
В отдельном файле должен быть написан тест на данный класс
*/

#ifndef __H_CCOMPLEXVECTOR  // recompilation protection
#define __H_CCOMPLEXVECTOR
#define LEN 2 // complex vector length

#include "Complex.h"

class CComplexVector
{
private:
	Complex_num ComplexVec_[LEN]; 
    // tests for vector
	friend int sum_test(const CComplexVector &vect1, const CComplexVector &vect2, const CComplexVector &sum);
	friend int difference_test(const CComplexVector &vect1, const CComplexVector &vect2, const CComplexVector &diff);
	friend int scalarprod_test(const CComplexVector &vect1, const CComplexVector &vect2, const Complex_num &prod);
public:

	// default constructor for complex vector
	CComplexVector();

    // static array constructor for complex vector
	CComplexVector(Complex_num cvec[]);
	
    // destructor for complex vector
	~CComplexVector();
	
    // arithmetic operators for complex vector
    CComplexVector operator+(const CComplexVector &cvec);
	CComplexVector operator-(const CComplexVector &cvec);
	Complex_num operator*(const CComplexVector &cvec);
	void operator=(const CComplexVector &cvec);
	
    // output operator for complex vector
	friend std::ostream& operator<<(std::ostream &out, const CComplexVector& cvec);
};

#endif
