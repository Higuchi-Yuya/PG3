#include "SceneManager.h"
#include <stdio.h>

SceneManager* SceneManager::GetInstance()
{
	// 関数内static変数として宣言する
	static SceneManager* instance = new SceneManager;

	return instance;
}

void SceneManager::ChangeScene(int sceneNo)
{
	switch (sceneNo)
	{
	case 0:// Titleシーン
		printf("Scene:Title\n");
		break;
	case 1:// NewGameシーン
		printf("Scene:NewGame\n");
		break;
	case 2:// GamePlayシーン
		printf("Scene:GamePlay\n");
		break;
	case 3:// GameClearシーン
		printf("Scene:GameClear\n");
		break;
	default:
		break;
	}
}

SceneManager::SceneManager()
{

}

SceneManager::~SceneManager()
{
}
