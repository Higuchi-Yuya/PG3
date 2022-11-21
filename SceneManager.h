#pragma once
class SceneManager final
{
public:
	// インスタンス
	static SceneManager* GetInstance();

public:
	// コピーコンストラクタを無効にする
	SceneManager(const SceneManager&) = delete;
	// 代入演算子を無効にする
	SceneManager& operator=(const SceneManager&) = delete;

	// シーンチェンジ関数
	void ChangeScene(int sceneNo);

private:
	// コンストラクタ
	SceneManager();
	// デストラクタ
	~SceneManager();
};

