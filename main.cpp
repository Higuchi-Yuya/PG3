#include <stdio.h>
#include <stdlib.h>
#include "Circle.h"
#include "Rectangle.h"
#include "IShape.h"

int main() {
	// �錾
	int size = 2;
	IShape* ishape[] =
	{
		new Circle,
		new Rectangle
	};

	// �X�V����


	// �`�揈��
	for (int i = 0; i < size; i++)
	{
		ishape[i]->Draw();
	}


	// �j��
	for (int i = 0; i < size; i++)
	{
		ishape[i]->~IShape();
	}


	return 0;
}