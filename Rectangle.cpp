#include "Rectangle.h"
#include <stdio.h>
Rectangle::~Rectangle()
{
	printf("�݁A������...�Ȃ��Ȃ���������������...\n");
}

void Rectangle::Draw()
{
	printf("�l�p���ڂ����a��������\n");
}

void Rectangle::Size()
{
	int result = sizeX * sizeY;
	printf("�ʐ�:%d\n", result);
}
