#include <windows.h>
#include "Enemy.h"

int main() {
	Enemy* enemy1 = new Enemy;
	
	// ����������
	enemy1->Initialize();

	while (true) 
	{
		// �X�V����
		enemy1->Update();

		// �X���[�v
		Sleep(1 * 1000);
	}

	return 0;
}