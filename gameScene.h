#pragma once
#include <stdio.h>
#include "Enemy.h"

class gameScene
{

public:
	void Initialize();
	void Update();
	void Draw();
private:
	// �֐��̐錾
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	int deadOrLife = 0;

};

