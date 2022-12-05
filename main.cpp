#include <windows.h>
#include "Enemy.h"

int main() {
	Enemy* enemy1 = new Enemy;
	
	// 初期化処理
	enemy1->Initialize();

	while (true) 
	{
		// 更新処理
		enemy1->Update();

		// スリープ
		Sleep(1 * 1000);
	}

	return 0;
}