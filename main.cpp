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

	printf("���������E�����A�I��ł��������B\n�P�Ԃ̏ꍇ������\n�Q�Ԃ̏ꍇ���̐�����\n");
	scanf_s("%d", &deadOrLife);
	
	switch (deadOrLife)
	{
	case 1:// ������
		Enemy::IsDead = false;
		break;
	case 2:// ����
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