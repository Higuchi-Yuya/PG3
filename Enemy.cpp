#include "Enemy.h"
#include <stdio.h>

bool Enemy::IsAlive;

void Enemy::Initialize() {

}

void Enemy::Update()
{
	if (IsAlive == false) {
		printf("“G‚Í‚µ‚Ô‚Æ‚­¶‚«‚Ä‚¢‚éB\n");
	}
	else if (IsAlive == true) {
		printf("“G‚Í‚ ‚Ì¢‚ÉÀ‚Á‚½B\n");
	}
}

void Enemy::Draw() {

}