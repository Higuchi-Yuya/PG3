#include <stdio.h>
#include <functional>
#include <Windows.h>
#include <time.h>

int main(int argc,const char*argv[]) {
	printf("start\n");
	int number = 0;

	std::function<void(int)>fx = [](int i)
	{
		srand(time(nullptr));
		int randomNum = rand() % 36 + 1;
		int number_ = i;
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
	};

	// ���[�U�[�̓��͂���t���A���ɑ��
	scanf_s("%d", &number);

	// 3�b��Ɏ��s����悤��
	Sleep(3000);

	// �֐����Ăяo��
	fx(number);

	return 0;
}