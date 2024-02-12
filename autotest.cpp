#include "CComplexVector.h"
#include "autotest.h"

int sum_test(const CComplexVector &vect1, const CComplexVector &vect2, const CComplexVector &sum)
{
	Complex_num cvector[LEN];
	for(int i = 0; i < LEN; ++i)
	{
		 
		 if((fabs((vect1.ComplexVec_[i].Re_ + vect2.ComplexVec_[i].Re_) - sum.ComplexVec_[i].Re_) > EPS) || (fabs((vect1.ComplexVec_[i].Im_ + vect2.ComplexVec_[i].Im_) - sum.ComplexVec_[i].Im_) > EPS))
		 {
		 	return -1;
		 }
	}
	return 1;
}

int difference_test(const CComplexVector &vect1, const CComplexVector &vect2, const CComplexVector &diff)
{
	Complex_num cvector[LEN];
	for(int i = 0; i < LEN; ++i)
	{
		 if((fabs((vect1.ComplexVec_[i].Re_ - vect2.ComplexVec_[i].Re_) - diff.ComplexVec_[i].Re_) > EPS) 
		 	|| (fabs((vect1.ComplexVec_[i].Im_ - vect2.ComplexVec_[i].Im_) - diff.ComplexVec_[i].Im_) > EPS))
		 {
		 	return -1;
		 }
	}
	return 1;
}

int scalarprod_test(CComplexVector &vect1, const CComplexVector &vect2, const Complex_num &prod)
{
	Complex_num test_prod;
	test_prod = vect1 * vect2;
	if(((test_prod.Re_ - prod.Re_) >= EPS) || ((test_prod.Im_ - prod.Im_) > EPS))
	{
		return -1;
	}
	else
	{
		return 1;
	}
}
