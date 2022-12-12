#include <stdio.h>
#include <stdlib.h>
#include "Circle.h"
#include "Rectangle.h"
#include "IShape.h"

int main() {
	// éŒ¾
	int size = 2;
	IShape* ishape[] =
	{
		new Circle,
		new Rectangle
	};

	// XVˆ—


	// •`‰æˆ—
	for (int i = 0; i < size; i++)
	{
		ishape[i]->Draw();
	}


	// ”jŠü
	for (int i = 0; i < size; i++)
	{
		ishape[i]->~IShape();
	}


	return 0;
}