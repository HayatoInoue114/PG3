#include <iostream>
#include <ctime>
#include <cstdlib>
#include <thread>
#include <chrono>
#include <random>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <Windows.h>

// 指定された範囲 [min, max] の乱数を返す関数
int GetRandom(int min, int max) {
    static bool initialized = false;
    if (!initialized) {
        srand(static_cast<unsigned int>(time(NULL)));
        initialized = true;
    }

    return min + (rand() % (max - min + 1));
}


// コールバック関数の型を定義
typedef void(*PFunc)(int*);

// コールバック関数の実装
void ShowResult(int* num) {
    int result = GetRandom(1, 6);

    //丁か半かの判定
    bool isWin = false;

    if (result % 2 == 0) {
        isWin = true;
    }

    if (isWin == false && *num == 1) {
        printf("%dの丁 : 勝ちです\n", result);
    }
    else if (isWin && *num == 2) {
        printf("%dの半 : 勝ちです\n", result);
    }
    else if (*num == 1) {
        printf("%dの半 : 負けです\n", result);
    }
    else if (*num == 2) {
        printf("%dの丁 : 負けです\n", result);
    }
}

void setTimeout(PFunc p, int second, int num) {

    int count = second;

    while (count != 0)
    {

        printf(".");

        Sleep(1000);

        count--;

    }

    printf("\n");

    p(&num);

}

int main() {
    std::cout << "サイコロを振ります。半か丁か、どちらかを当ててください（丁=1、半=2）: " << std::endl;
    
    int num = 0;


    // サイコロを振る（1から6の範囲でランダムな数を生成）
    while (num < 1 || 2 < num)
    {
        scanf_s("%d", &num);
        while (getchar() != '\n');
    }

    if (num == 1) {
        printf("あなたは丁を選びました。結果は...");
    }
    else {
        printf("あなたは半を選びました。結果は...");
    }

    // コールバック関数を呼び出す
    PFunc p;
    p = ShowResult;
    setTimeout(p, 3, num);

	return 0;
}

