#include "Circle.h"
#include <stdio.h>
Circle::~Circle()
{
	printf("�����ꂽ�܂�`\n");
}

void Circle::Draw()
{
	printf("�܂�܂�Ȃڂ����a��������\n");
}

void Circle::Size()
{
	float result = radius * radius * PI;
	printf("�ʐ�:%f\n", result);
}
