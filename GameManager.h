#pragma once
#include "IScene.h"
#include "TitleScene.h"
#include "GameScene.h"
#include "GameOverScene.h"
#include "GameClearScene.h"
#include <iostream>

class GameManager
{
private:
	// ���ݓx�̃V�[���Ȃ̂���ێ����郁���o�ϐ�
	std::unique_ptr<IScene> currentScene;
public:
	// �R���X�g���N�^�A��������ʂ��^�C�g���ɃZ�b�g����
	GameManager() {
		currentScene = std::make_unique<TitleScene>();
	};

	int run();
};

