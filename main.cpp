#include <stdio.h>
#include <thread>

using namespace std;

void thread1() {
	printf("thread 1\n");
}

void thread2() {
	printf("thread 2\n");
}

void thread3() {
	printf("thread 3\n");
}

int main(void) {
	thread th1(thread1);
	th1.join();

	thread th2(thread2);
	th2.join();

	thread th3(thread3);
	th3.join();

	return 0;
}