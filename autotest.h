#ifndef __H_AUTOTEST  // recompilaton protection
#define __H_AUTOTEST

#include "CComplexVector.h"

#define EPS 1.e-15

int sum_test(const CComplexVector &vect1, const CComplexVector &vect2, const CComplexVector &sum);
int difference_test(const CComplexVector &vect1, const CComplexVector &vect2, const CComplexVector &diff);
int scalarprod_test(CComplexVector &vect1, const CComplexVector &vect2, const Complex_num &prod);
 
#endif 