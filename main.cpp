#include <iostream>
#include <chrono>
#include <string>

int main() {
    std::string str(100000, 'a');

    std::chrono::system_clock::time_point start, end;
    std::chrono::microseconds usec;

    // コピー処理の時間計測
    start = std::chrono::system_clock::now();
    std::string copy = str;
    end = std::chrono::system_clock::now();
    usec = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Copy: " << usec.count() << " microseconds" << std::endl;

    // 移動処理の時間計測
    start = std::chrono::system_clock::now();
    std::string move = std::move(str);
    end = std::chrono::system_clock::now();
    usec = std::chrono::duration_cast<std::chrono::microseconds>(end - start);
    std::cout << "Move: " << usec.count() << " microseconds" << std::endl;

    return 0;
}
