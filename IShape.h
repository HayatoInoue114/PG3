#pragma once
#define M_PI 3.14

class IShape
{
public:

	virtual void size() = 0;
	
	virtual void draw() = 0;
protected:

	float result_;
};

