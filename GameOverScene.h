#pragma once
#include"IScene.h"
class GameOverScene :public IScene
{
public:
	// 更新処理
	void Update()override;
	// 描画処理
	void Draw()override;
};

