#include "Enemy.h"
#include <stdio.h>

bool Enemy::IsAlive;

void Enemy::Initialize() {

}

void Enemy::Update()
{
	if (IsAlive == false) {
		printf("�G�͂��ԂƂ������Ă���B\n");
	}
	else if (IsAlive == true) {
		printf("�G�͂��̐��ɐ������B\n");
	}
}

void Enemy::Draw() {

}