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
	// 現在度のシーンなのかを保持するメンバ変数
	std::unique_ptr<IScene> currentScene;
public:
	// コンストラクタ、初期化画面をタイトルにセットする
	GameManager() {
		currentScene = std::make_unique<TitleScene>();
	};

	int run();
};

