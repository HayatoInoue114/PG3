#pragma once
#define M_PI 3.14

class IShape
{
public:
	//�ʐς����߂�֐�
	virtual void size() = 0;
	//�ʐς̒l��\������֐�
	virtual void draw() = 0;
protected:
	// �ʐ�
	float result_;
};

