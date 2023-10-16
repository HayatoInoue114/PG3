//#include <stdio.h>
//#include <random>
//#include <windows.h>
//
//int GetRandom(int min, int max) {
//	static int flag;
//
//	if (flag == 0) {
//		srand((int)time(NULL));
//		flag = 1;
//	}
//
//	return min + (int)(rand() * (max - min + 1.0) / (1.0 + RAND_MAX));
//}
//
//typedef void (*PFunc)(char*);
//
//void setTimeout(PFunc p, int second) {
//	Sleep(second * 1000);
//
//	//p(&second);
//}
//
//void DispDinghan(char* s) {
//	printf("%c！\n", *s);
//}
//
//void Dinghan() {
//	char dinghan{};
//	scanf_s("%c", &dinghan);
//
//	int result = GetRandom(1, 6);
//
//	PFunc p;
//
//	if (result % 2 == 0) {
//		p = DispDinghan;
//		setTimeout(p, 3);
//	}
//	if (result % 2 == 1) {
//		p = DispDinghan;
//		setTimeout(p, 3);
//	}
//
//	/*if (result % 2 == 0) {
//		printf("丁!");
//		if (dinghan == '丁') {
//			printf("当たり！！");
//		}
//		if (dinghan == '半') {
//			printf("はずれ...");
//		}
//	}
//
//	if (result % 2 == 1) {
//		printf("半!");
//		if (dinghan == '丁') {
//			printf("はずれ...");
//		}
//		if (dinghan == '半') {
//			printf("当たり！！");
//		}
//	}*/
//}
//
//int main(void) {
//	
//	
//
//
//
//	return 0;
//}

#include <iostream>
#include <ctime>
#include <cstdlib>
#include <thread> // スリープ用
#include <chrono> // スリープ用

// コールバック関数の型を定義
typedef void (*CallbackFunction)(int, std::string);

// コールバック関数の実装
void ShowResult(int diceRoll, std::string userGuess) {
    std::cout << "サイコロの目: " << diceRoll << std::endl;

    // 半か丁かを判定
    std::string result = (diceRoll % 2 == 0) ? "半" : "丁";

    std::this_thread::sleep_for(std::chrono::seconds(3)); // 3秒待つ

    // ユーザーの予想と結果を比較
    if (userGuess == result) {
        std::cout << "正解！" << std::endl;
    }
    else {
        std::cout << "不正解。" << std::endl;
    }
}

int main() {
    // 乱数初期化
    std::srand(static_cast<unsigned>(std::time(nullptr)));

    std::cout << "サイコロを振ります。半か丁か、どちらかを当ててください（半/丁）: ";
    std::string userGuess;
    std::cin >> userGuess;

    // サイコロを振る（1から6の範囲でランダムな数を生成）
    int diceRoll = std::rand() % 6 + 1;

    // コールバック関数を呼び出す
    CallbackFunction callback = ShowResult;
    callback(diceRoll, userGuess);

    return 0;
}
