#pragma once
#define M_PI 3.14

class IShape
{
public:
	//–ÊÏ‚ğ‹‚ß‚éŠÖ”
	virtual void size() = 0;
	//–ÊÏ‚Ì’l‚ğ•\¦‚·‚éŠÖ”
	virtual void draw() = 0;
protected:
	// –ÊÏ
	float result_;
};

