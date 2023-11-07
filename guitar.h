#pragma once
#include "performance.h"

class Guitar : public Performance
{
public:
	Guitar();
	~Guitar();
	void Play() override;
private:

};

