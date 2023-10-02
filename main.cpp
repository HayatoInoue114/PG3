#include <stdio.h>

int Recursive(int a) {

	if (a <= 1) {
		return (1);
	}

	return(Recursive(a * 2 - 50));
}

int main(void) {
	


	return 0;
}