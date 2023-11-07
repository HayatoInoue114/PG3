#pragma once
#define M_PI 3.14

class IShape
{
public:
	//面積を求める関数
	virtual void size() = 0;
	//面積の値を表示する関数
	virtual void draw() = 0;
protected:
	// 面積
	float result_;
};

