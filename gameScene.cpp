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
	printf("¶‚©‚·‚©ŽE‚·‚©A‘I‚ñ‚Å‚­‚¾‚³‚¢B\n‚P”Ô‚Ìê‡¶‚«‚é\n‚Q”Ô‚Ìê‡‚ ‚Ì¢À‚«\n");
	scanf_s("%d", &deadOrLife);

	switch (deadOrLife)
	{
	case 1:// ¶‚«‚é
		Enemy::IsAlive = false;
		break;
	case 2:// Ž€‚Ê
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
