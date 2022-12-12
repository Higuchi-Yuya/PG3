#pragma once
#include "IShape.h"
class Circle:public IShape
{
public:
	~Circle()override;
	void Draw()override;
};

