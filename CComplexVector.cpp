/*
1. Определить класс CComplexVector для работы с вектором комплексных чисел. Длина вектора задается с помощью оператора #define.
В классе должны быть определены необходимые конструкторы, операторы сложения, вычитания, скалярного умножения.
В отдельном файле должен быть написан тест на данный класс
*/

#include "CComplexVector.h"

// array constructor for complex vector
CComplexVector::CComplexVector(Complex_num cvec[])
{
	for(int i = 0; i < LEN; ++i)
	{
		this->ComplexVec_[i]=cvec[i];
	}
}

// default constructor for complex vector based on default constructor for complex number
CComplexVector::CComplexVector()
{
	Complex_num cvec[LEN];
	for(int i = 0; i < LEN; ++i)
	{
		this->ComplexVec_[i]=cvec[i];
	}
}

// destructor for complex vector
CComplexVector::~CComplexVector()
{
    std::cout << "Destructor for complex vector\n";
}

// addition operator for complex vector
CComplexVector CComplexVector::operator+(const CComplexVector &cvec)
{
	Complex_num cvector[LEN];
	for(int i = 0; i < LEN; ++i)
	{
		cvector[i] = this->ComplexVec_[i]+cvec.ComplexVec_[i];
	}
	return CComplexVector(cvector);
}

// subtraction operator for complex vector
CComplexVector CComplexVector::operator-(const CComplexVector &cvec)
{
	Complex_num cvector[LEN];
	for(int i = 0; i < LEN; ++i)
	{
		cvector[i] = this->ComplexVec_[i] - cvec.ComplexVec_[i];
	}
	return CComplexVector(cvector);
}

// scalar multiplication operator for complex vector
Complex_num CComplexVector::operator*(const CComplexVector &cvec)
{
	Complex_num prod;
	for(int i = 0; i < LEN; ++i)
	{
		prod = prod + this->ComplexVec_[i]*cvec.ComplexVec_[i];
	}
	return prod;
}

// 
void CComplexVector::operator=(const CComplexVector &cvec)
{
    for(int i = 0; i < LEN; ++i)
    {
        this->ComplexVec_[i] = cvec.ComplexVec_[i];
    }
}

std::ostream& operator<<(std::ostream &out, const CComplexVector& cvec)
{
    out << "( ";
    for(int i = 0; i < LEN; ++i)
    {
        if(i == LEN-1)
        {
            out << cvec.ComplexVec_[i] << " ";
        }
        else
        {
            out << cvec.ComplexVec_[i] << ", ";
        }
    }
    out << ")";
    return out;
}