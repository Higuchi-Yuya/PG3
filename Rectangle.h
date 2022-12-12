#pragma once
#include "IShape.h"
class Rectangle :public IShape
{
public:
	~Rectangle()override;
	void Draw()override;
};

