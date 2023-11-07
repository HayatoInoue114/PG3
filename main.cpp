#include <stdio.h>
#include "IShape.h"
#include "Circle.h"
#include "Rectangle.h"

int main(void) {
	IShape* shape[2]{};

	for (int i = 0; i < 2; i++) {
		if (i < 1) {
			shape[i] = new Circle();
		}
		else {
			shape[i] = new Rectangle();
		}
	}

	for (int i = 0; i < 2; i++) {
		shape[i]->size();
		shape[i]->draw();
	}

	return 0;
}