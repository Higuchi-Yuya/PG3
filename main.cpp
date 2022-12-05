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

	printf("¶‚©‚·‚©ŽE‚·‚©A‘I‚ñ‚Å‚­‚¾‚³‚¢B\n‚P”Ô‚Ìê‡¶‚«‚é\n‚Q”Ô‚Ìê‡‚ ‚Ì¢À‚«\n");
	scanf_s("%d", &deadOrLife);
	
	switch (deadOrLife)
	{
	case 1:// ¶‚«‚é
		Enemy::IsDead = false;
		break;
	case 2:// Ž€‚Ê
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