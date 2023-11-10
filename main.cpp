#include <stdio.h>
#include "Comparer.h"

int main() {
	Comparer<int, int> comparer1(1, 2);
	Comparer<int, float> comparer2(2, 5.0f);
	Comparer<int, double> comparer3(2, 2.01);
	Comparer<float, float> comparer4(1.0f, 3.0f);
	Comparer<float, double> comparer5(1.01f, 2.99);
	Comparer<double, double> comparer6(1.2, 3.56);
	
	

	// 結果を表示
	std::cout << "int, int        " << comparer1.Min() << std::endl;
	std::cout << "int, float      " << comparer2.Min() << std::endl;
	std::cout << "int, double     " << comparer3.Min() << std::endl;
	std::cout << "float, float    " << comparer4.Min() << std::endl;
	std::cout << "float, double   " << comparer5.Min() << std::endl;
	std::cout << "double, double  " << comparer6.Min() << std::endl;

	return 0;
}