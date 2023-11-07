#include "Rectangle.h"
#include <stdio.h>

Rectangle::Rectangle() {
	width_ = 5;
	height_ = 10;
}

Rectangle::~Rectangle() {
}

void Rectangle::size() {
	result_ = width_ * height_;
}

void Rectangle::draw() {
	printf("‹éŒ`‚Ìc• = %d\n", height_);
	printf("‹éŒ`‚Ì‰¡• = %d\n", width_);
	printf("‹éŒ`‚Ì–ÊÏ = %.0f\n", result_);
}