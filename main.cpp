#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
typedef void (*PFunc)(int*);

void callback1(int* s) {
	printf("%d�b��Ɏ��s������\n", *s);
}

void setTimeoout(PFunc p, int second,int *number) {
	// �R�[���o�b�N�֐����Ăяo��
	Sleep(second);

	p(number);
}

void gambling(int *number)
{
	srand(time(nullptr));
	int randomNum = rand() % 36 + 1;
	int number_ = *number;
	printf("����̖ڂ�%d\n", randomNum);

	if (number_ % 2 == 0) {
		if (randomNum % 2 == 0) {
			printf("���I�I�@������ł��I\n");
		}
		else
		{
			printf("���I�I�@�͂���ł��I\n");
		}
	}
	else {
		if (randomNum % 2 == 0) {
			printf("���I�I�@�͂���ł��I\n");
		}
		else
		{
			printf("���I�I�@������ł��I\n");
		}
	}

}

int main() {
	printf("start\n");
	int number = 0;
	PFunc p;
	scanf_s("%d", &number);

	p = gambling;
	//p(&number);
	setTimeoout(p, 3000,&number);


	return 0;
}