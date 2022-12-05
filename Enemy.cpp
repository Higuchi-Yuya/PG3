#include "Enemy.h"
#include <stdio.h>
bool Enemy::IsDead;

void Enemy::Update()
{
	if (IsDead == false) {
		printf("“G‚Í‚µ‚Ô‚Æ‚­¶‚«‚Ä‚¢‚éB\n");
	}
	else if (IsDead == true) {
		printf("“G‚Í‚ ‚Ì¢‚ÉÀ‚Á‚½B\n");
	}
}
