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
	printf("高さ = %d\n", height_);
	printf("横幅 = %d\n", width_);
	printf("面積 = %.0f\n", result_);
}