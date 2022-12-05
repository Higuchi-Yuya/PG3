#include <windows.h>
#include "Enemy.h"

int main() {
	Enemy* enemy1 = new Enemy;
	
	int deadOrLife = 0;

	while (true) 
	{
		Sleep(1 * 1000);
		enemy1->Update();
	}

	return 0;
}