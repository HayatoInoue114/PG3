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
	printf("��`�̏c�� = %d\n", height_);
	printf("��`�̉��� = %d\n", width_);
	printf("��`�̖ʐ� = %.0f\n", result_);
}