#include "Circle.h"
#include <stdio.h>
Circle::~Circle()
{
	printf("消されたまる〜\n");
}

void Circle::Draw()
{
	printf("まんまるなぼくが誕生したよ\n");
}

void Circle::Size()
{
	float result = radius * radius * PI;
	printf("面積:%f\n", result);
}
