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
	printf("â~ÇÃîºåa = %d\n", radius_);
	printf("â~ÇÃñ êœ = %.2f\n\n\n", result_);
}