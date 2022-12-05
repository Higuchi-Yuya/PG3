#include "GameScene.h"

GameScene::~GameScene()
{
	delete enemy1;
	delete enemy2;
	delete enemy3;
}

void GameScene::Initialize()
{
	enemy1->Initialize();
	enemy2->Initialize();
	enemy3->Initialize();
}

void GameScene::Update()
{
	printf("���������E�����A�I��ł��������B\n�P�Ԃ̏ꍇ������\n�Q�Ԃ̏ꍇ���̐�����\n");
	scanf_s("%d", &deadOrLife);

	switch (deadOrLife)
	{
	case 1:// ������
		Enemy::IsAlive = false;
		break;
	case 2:// ����
		Enemy::IsAlive = true;
		break;
	default:
		break;
	}

	enemy1->Update();
	enemy2->Update();
	enemy3->Update();
}

void GameScene::Draw()
{
	enemy1->Draw();
	enemy2->Draw();
	enemy3->Draw();
}
