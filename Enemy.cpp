#include "Enemy.h"
#include <stdio.h>
bool Enemy::IsDead;

void Enemy::Update()
{
	if (IsDead == false) {
		printf("�G�͂��ԂƂ������Ă���B\n");
	}
	else if (IsDead == true) {
		printf("�G�͂��̐��ɐ������B\n");
	}
}
