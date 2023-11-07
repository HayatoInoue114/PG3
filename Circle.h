#pragma once
#include "IShape.h"

class Circle : public IShape
{
public:
	Circle();
	~Circle();

	void size() override;
	void draw() override;
private:
	int radius_;
};

