#include "guitar.h"
#include "trumpet.h"
#include "performance.h"

int main() {
	Performance* performances[2];

	/*performances[0] = new Guitar;
	performances[1] = new Trumpet;*/

	for (int i = 0; i < 2; i++) {
		if(i < 1){
			performances[i] = new Guitar;
		}
		else {
			performances[i] = new Trumpet;
		}
	}
	for (int i = 0; i < 2; i++) {
		performances[i]->Play();
	}
	for (int i = 0; i < 2; i++) {
		delete performances[i];
	}

	return 0;
}
