/*
1. Определить класс CComplexVector для работы с вектором комплексных чисел. Длина вектора задается с помощью оператора #define.
В классе должны быть определены необходимые конструкторы, операторы сложения, вычитания, скалярного умножения.
В отдельном файле должен быть написан тест на данный класс
*/

#include "autotest.h"

int test_func();

int main(void)
{
        if(!test_func())
        {
                return -1;
        }

	CComplexVector l1;
	CComplexVector l2;
	CComplexVector l4;
	CComplexVector l3;
	Complex_num l5;
	std::cout<< "1 vector: ";
        std::cout << l1 << std::endl;
	std::cout<<std::endl;
	std::cout<< "2 vector: ";
        std::cout << l2 << std::endl;
	std::cout<<std::endl;
	l3 = l1 + l2;
	l4 = l1 - l2;
	l5 = l1 * l2;
	std::cout<< "Sum: ";
        std::cout << l3 << std::endl;
	std::cout<<std::endl;
	std::cout<< "Difference: ";
        std::cout << l4 << std::endl;
	std::cout<<std::endl;
	std::cout<< "Scalar product: ";
        std::cout << l5 << std::endl;
	std::cout<<std::endl;
	return 1;
}	

int test_func()
{
        srand(time(NULL));
        CComplexVector test1;
        CComplexVector test2;
        CComplexVector test3;
        CComplexVector test4;
        Complex_num test5;
        Complex_num number1, number2, number3;
        number3 = number1 + number2;
        std::cout << number3 << std::endl;
        for(int i = 0; i < 100; ++i)
        {
                test3 = test1 + test2;
                if(!sum_test(test1,test2,test3))
                {
                        std::cout << "vect1:";
                        std::cout << test1 << std::endl;
                        std::cout << "vect1:";
                        std::cout << test2 << std::endl;
                        std::cout << "vect1:";
                        std::cout << test3 << std::endl;
                        std::cout << std::endl;
                        std::cout << "Autotest '+' failed" << std::endl;
                        return -1;
                }
                else
                {
                        std::cout << "Autotest '+' aproved" << std::endl;
                }
                test4 = test1 - test2;
                if(!difference_test(test1,test2,test4))
                {
                        std::cout << "Autotest '-' failed" << std::endl;
                        return -1;
                }
                else
                {
                        std::cout << "Autotest '-' aproved" << std::endl;
                }
                test5 = test1 * test2;
                if(!scalarprod_test(test1,test2,test5))
                {
                        std::cout << "Autotest '*' failed" << std::endl;
                        return -1;
                }
                else
                {
                        std::cout << "Autotest '*' aproved" << std::endl;
                }
        }
        return 1;
}