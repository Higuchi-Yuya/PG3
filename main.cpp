#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
#include "Enemy.h"



int main() {
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;
	int deadOrLife = 0;

	printf("生かすか殺すか、選んでください。\n１番の場合生きる\n２番の場合あの世逝き\n");
	scanf_s("%d", &deadOrLife);
	
	switch (deadOrLife)
	{
	case 1:// 生きる
		Enemy::IsDead = false;
		break;
	case 2:// 死ぬ
		Enemy::IsDead = true;
		break;
	default:
		break;
	}

	enemy1->Update();
	enemy2->Update();
	enemy3->Update();


	return 0;
}