#pragma once
class EnemyB
{
private:
	
		int centerX = 0;
		int centerY = 0;
		int sizeX = 0;
		int sizeY = 0;
		int speed = 0;
		int AliveFlag = 0;

		//EnemyB* next;

public:
	EnemyB(int x,int y);
	~EnemyB();

	void bulletUpdate();

	void bulletDraw();

	void bulletMove(int pcx/*自機の中心座標xの代入*/,
		int pcy/*自機の中心座標xの代入*/,
		int ebx/*敵の球の中心座標xの代入*/,
		int eby/*敵の球の中心座標yの代入*/);
};

