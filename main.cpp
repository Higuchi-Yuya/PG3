#include "gameScene.h"
#include <windows.h>

int main() {

	// 関数の宣言
	gameScene* gamescene_ = new gameScene;
	gamescene_->Initialize();

	// ゲームループ
	while (true) {

		// 更新処理
		gamescene_->Update();

		// 描画処理
		gamescene_->Draw();

		// スリープ
		Sleep(1 * 1000);
	}

	return 0;
}