#include "Circle.h"
#include <stdio.h>

Circle::Circle() {
	radius_ = 5;
}

Circle::~Circle() {
}

void Circle::size() {
	result_ = radius_ * radius_ * M_PI;
}

void Circle::draw() {
	printf("�~�̔��a = %d\n", radius_);
	printf("�~�̖ʐ� = %.2f\n\n\n", result_);
}