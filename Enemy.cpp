#include "Enemy.h"
#include <stdio.h>
bool Enemy::IsDead;

void Enemy::Update()
{
	if (IsDead == false) {
		printf("敵はしぶとく生きている。\n");
	}
	else if (IsDead == true) {
		printf("敵はあの世に逝った。\n");
	}
}
