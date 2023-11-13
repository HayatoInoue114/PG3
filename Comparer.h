#pragma once
#include <iostream>

template <typename T1, typename T2>

class Comparer {
public:
	
	Comparer(T1 number1, T2 number2) : number1_(number1), number2_(number2) {}

	
	T1 Min() {
		if (number1_ < number2_) {
			return static_cast<T1>(number1_);
		}
		else {
			return static_cast<T2>(number2_);
		}

		return 0;
	}

private:
	T1 number1_{};
	T2 number2_{};
};

