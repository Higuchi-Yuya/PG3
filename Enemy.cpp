#include "Enemy.h"
#include <stdio.h>

bool Enemy::IsAlive;

void Enemy::Initialize() {

}

void Enemy::Update()
{
	if (IsAlive == false) {
		printf("敵はしぶとく生きている。\n");
	}
	else if (IsAlive == true) {
		printf("敵はあの世に逝った。\n");
	}
}

void Enemy::Draw() {

}