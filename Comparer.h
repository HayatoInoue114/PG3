#pragma once
#include <iostream>

template <typename T1, typename T2>

class Comparer {
public:
	// コンストラクタ
	Comparer(T1 number1, T2 number2) : number1_(number1), number2_(number2) {}

	// 2つの値を比較して小さい方の値を返す関数
	T1 Min() {
		if (number1_ < number2_) {
			return static_cast<T1>(number1_);
		}
		else if (number1_ > number2_) {
			return static_cast<T2>(number2_);
		}

		return 0;
	}

private:
	T1 number1_{};
	T2 number2_{};
};

