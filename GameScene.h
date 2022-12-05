#pragma once
#include <stdio.h>
#include "Enemy.h"

class GameScene
{

public:
	~GameScene();
	void Initialize();
	void Update();
	void Draw();
private:
	// ŠÖ”‚ÌéŒ¾
	Enemy* enemy1 = new Enemy;
	Enemy* enemy2 = new Enemy;
	Enemy* enemy3 = new Enemy;

	int deadOrLife = 0;

};

