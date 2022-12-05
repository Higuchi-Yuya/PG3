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
	printf("生かすか殺すか、選んでください。\n１番の場合生きる\n２番の場合あの世逝き\n");
	scanf_s("%d", &deadOrALive);

	switch (deadOrALive)
	{
	case 1:// 生きる
		Enemy::IsAlive = false;
		break;
	case 2:// 死ぬ
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
