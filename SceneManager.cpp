#include "SceneManager.h"
#include <stdio.h>

SceneManager* SceneManager::GetInstance()
{
	// �֐���static�ϐ��Ƃ��Đ錾����
	static SceneManager* instance = new SceneManager;

	return instance;
}

void SceneManager::ChangeScene(int sceneNo)
{
	switch (sceneNo)
	{
	case 0:// Title�V�[��
		printf("Scene:Title\n");
		break;
	case 1:// NewGame�V�[��
		printf("Scene:NewGame\n");
		break;
	case 2:// GamePlay�V�[��
		printf("Scene:GamePlay\n");
		break;
	case 3:// GameClear�V�[��
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
