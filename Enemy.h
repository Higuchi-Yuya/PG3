#pragma once
class Enemy
{
public:
	static bool IsAlive;

	// 初期化処理
	void Initialize();

	// 更新処理
	void Update();

	// 描画処理
	void Draw();
};

