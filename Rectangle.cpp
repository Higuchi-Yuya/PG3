#include "Rectangle.h"
#include <stdio.h>
Rectangle::~Rectangle()
{
	printf("‚İAŒ©‚¦‚é...‚È‚­‚È‚Á‚½‚µ‚Á‚©‚­‚³‚ñ‚ª...\n");
}

void Rectangle::Draw()
{
	printf("lŠp‚¢‚Ú‚­‚ª’a¶‚µ‚½‚æ\n");
}

void Rectangle::Size()
{
	int result = sizeX * sizeY;
	printf("–ÊÏ:%d\n", result);
}
