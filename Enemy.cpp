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
	printf("�G�͋ߐڍU�����s�����B\n");
}

void Enemy::Shooting()
{
	printf("�G�͎ˌ��U�����s�����B\n");
}

void Enemy::Secession()
{
	printf("�G�͗��E���s�����B\n");
}

void (Enemy::*Enemy::pFunc[])() = {
		&Enemy::Proximity, // �v�f�ԍ� 0
		&Enemy::Shooting,  // �v�f�ԍ� 1
		&Enemy::Secession  // �v�f�ԍ� 2
};