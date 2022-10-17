#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
typedef void (*PFunc)(int*);

void callback1(int* s) {
	printf("%d秒後に実行されるよ\n", *s);
}

void setTimeoout(PFunc p, int second,int *number) {
	// コールバック関数を呼び出す
	Sleep(second);

	p(number);
}

void gambling(int *number)
{
	srand(time(nullptr));
	int randomNum = rand() % 36 + 1;
	int number_ = *number;
	printf("今回の目は%d\n", randomNum);

	if (number_ % 2 == 0) {
		if (randomNum % 2 == 0) {
			printf("丁！！　当たりです！\n");
		}
		else
		{
			printf("半！！　はずれです！\n");
		}
	}
	else {
		if (randomNum % 2 == 0) {
			printf("丁！！　はずれです！\n");
		}
		else
		{
			printf("半！！　当たりです！\n");
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