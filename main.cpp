#include <iostream>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <random>
#include <stdio.h>
#include <functional>
#include <Windows.h>

int GetRandom(int min, int max) {
	std::random_device rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<> rand(min, max);
	return rand(mt);
}

//typedef void (*PFunc)();
typedef std::function<void()> PFunc;


void setTimeout(PFunc p, int second) {
	Sleep(second * 1000);

	p();
}

int main() {
	std::function<void(int, std::string)> callback = [](int diceRoll, std::string guess) {
		std::cout << "サイコロの目: " << diceRoll << std::endl;

		// 半か丁かを判定
		std::string result;

		if (diceRoll % 2 == 0) {
			result = "丁";
		}
		else {
			result = "半";
		}

		// 予想と結果を比較
		if (guess == result) {
			std::cout << "正解！" << std::endl;
		}
		else {
			std::cout << "不正解。" << std::endl;
		}
	};

	std::cout << "サイコロを振ります。半か丁か、どちらかを当ててください（半/丁）: ";
	std::string userGuess;
	std::cin >> userGuess;

	// サイコロを振る
	int diceRoll = GetRandom(1, 6);

	PFunc pCallback{};
	pCallback = std::bind(callback, diceRoll, userGuess);
	setTimeout(pCallback, 3);

	return 0;
}

