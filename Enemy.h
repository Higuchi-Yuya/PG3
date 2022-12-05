#pragma once
class Enemy
{
public:
	Enemy();

	void Initialize();
	void Update();
	void Proximity();
	void Shooting();
	void Secession();

private:
	// メンバ関数ポインタ
	static void (Enemy:: *pFunc[])();
	int phaseNum = 0;
};

