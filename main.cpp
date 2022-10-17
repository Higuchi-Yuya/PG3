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
	};

	// ユーザーの入力を受付し、数に代入
	scanf_s("%d", &number);

	// 3秒後に実行するように
	Sleep(3000);

	// 関数を呼び出し
	fx(number);

	return 0;
}