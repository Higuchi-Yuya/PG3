#include <stdio.h>
#include <Windows.h>
#include "SceneManager.h"
int main() {
	// インスタンスを取得する
	SceneManager* sceneManager = SceneManager::GetInstance();
	// シーンナンバー
	int SceneNo = 0;

	while (true) {
		Sleep(1 * 1000);
		
		if (SceneNo > 3) {
			SceneNo = 0;
		}
		// 使用する

		sceneManager->ChangeScene(SceneNo);
		SceneNo++;
	}

	return 0;

}