#include "guitar.h"
#include "trumpet.h"
#include "performance.h"

int main() {
	Performance* performances[2];

	for (int i = 0; i < 1; i++) {
		if(i < 1){
			performances[i] = new Guitar;
		}
		else {
			performances[i] = new Trumpet;
		}
	}
	for (int i = 0; i < 1; i++) {
		performances[i]->Play();
	}
	for (int i = 0; i < 1; i++) {
		delete performances[i];
	}

	return 0;
}
