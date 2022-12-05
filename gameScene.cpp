#include "gameScene.h"

void gameScene::Initialize()
{
	enemy1->Initialize();
	enemy2->Initialize();
	enemy3->Initialize();
}

void gameScene::Update()
{
	printf("生かすか殺すか、選んでください。\n１番の場合生きる\n２番の場合あの世逝き\n");
	scanf_s("%d", &deadOrLife);

	switch (deadOrLife)
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

void gameScene::Draw()
{
	enemy1->Draw();
	enemy2->Draw();
	enemy3->Draw();
}
