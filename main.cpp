#include <stdio.h>
void General(int time, int gold) {
	int result = time * gold;
	printf("一般的%d\n", result);
}

int Recursive(int time,int gold) {
	if (time <= 1) {
		printf("再帰的%d\n", gold);
		return (0);
	}
	time--;
	return(gold + Recursive(time,gold * 2 - 50));
}

int main(void) {
	int time = 9;

	General(time, 1072);

	Recursive(time,100);

	return 0;
}