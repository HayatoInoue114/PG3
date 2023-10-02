#include <stdio.h>

int Recursive(int time,int gold,int num) {
	int result = num * time;
	if (time <= 1) {
		printf("一般的%d\n再帰的%d", result, gold);
		return (0);
	}
	time--;
	return(gold + Recursive(time,gold * 2 - 50,result));
}

int main(void) {
	Recursive(4,100,1072);


	return 0;
}