#include "Enemy.h"
#include <stdio.h>

bool Enemy::IsDead;


void Enemy::Update()
{
	
	(this->*pFunc[phaseNum])();
	phaseNum++;
	if (phaseNum > 2) {
		phaseNum = 0;
	}
}

void Enemy::Proximity()
{
	printf("“G‚Í‹ßÚUŒ‚‚ğs‚Á‚½B\n");
}

void Enemy::Shooting()
{
	printf("“G‚ÍËŒ‚UŒ‚‚ğs‚Á‚½B\n");
}

void Enemy::Secession()
{
	printf("“G‚Í—£’E‚ğs‚Á‚½B\n");
}

void (Enemy::*Enemy::pFunc[])() = {
		&Enemy::Proximity, // —v‘f”Ô† 0
		&Enemy::Shooting,  // —v‘f”Ô† 1
		&Enemy::Secession  // —v‘f”Ô† 2
};