#include "Rectangle.h"
#include <stdio.h>
Rectangle::~Rectangle()
{
	printf("み、見える...なくなったしっかくさんが...\n");
}

void Rectangle::Draw()
{
	printf("四角いぼくが誕生したよ\n");
}

void Rectangle::Size()
{
	int result = sizeX * sizeY;
	printf("面積:%d\n", result);
}
