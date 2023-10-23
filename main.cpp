#include <iostream>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <random>
#include <stdio.h>
#include <functional>

int GetRandom(int min, int max) {
	std::random_device rd;
	std::mt19937 gen(rd());
	std::uniform_int_distribution<int> dist(min, max);
	return dist(gen);
}

int main() {
	std::cout << "サイコロを振ります。半か丁か、どちらかを当ててください（半/丁）: ";
	std::string userGuess;
	std::cin >> userGuess;

	// サイコロを振る（1から6の範囲でランダムな数を生成）
	int diceRoll = GetRandom(1, 6);

	std::function<void(int, std::string)> callback = [&userGuess](int diceRoll, std::string guess) {
		std::cout << "サイコロの目: " << diceRoll << std::endl;

		// 半か丁かを判定
		std::string result = (diceRoll % 2 == 0) ? "半" : "丁";

		// 3秒待つ
		std::this_thread::sleep_for(std::chrono::seconds(3));

		// 予想と結果を比較
		if (guess == result) {
			std::cout << "正解！" << std::endl;
		}
		else {
			std::cout << "不正解。" << std::endl;
		}
		};

	// コールバック関数を呼び出す
	callback(diceRoll, userGuess);

	return 0;
}
