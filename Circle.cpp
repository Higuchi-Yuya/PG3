#include "Circle.h"
#include <stdio.h>
Circle::~Circle()
{
	printf("Á‚³‚ê‚½‚Ü‚é`\n");
}

void Circle::Draw()
{
	printf("‚Ü‚ñ‚Ü‚é‚È‚Ú‚­‚ª’a¶‚µ‚½‚æ\n");
}

void Circle::Size()
{
	float result = radius * radius * PI;
	printf("–ÊÏ:%f\n", result);
}
