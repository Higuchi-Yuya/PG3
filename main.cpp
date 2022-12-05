#include <windows.h>
#include "Enemy.h"

int main() {
	Enemy* enemy1 = new Enemy;
	
	enemy1->Initialize();

	while (true) 
	{
		enemy1->Update();
		Sleep(1 * 1000);
	}

	return 0;
}