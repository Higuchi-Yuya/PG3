#pragma once
class Enemy
{
public:
	static bool IsDead;

	void Update();
	void Proximity();
	void Shooting();
	void Secession();

private:
	// メンバ関数ポインタ
	static void (Enemy:: *pFunc[])();
	int phaseNum = 0;
};

