#include "EnemyBullet.h"

#include <math.h>

EnemyBullet::EnemyBullet(int x, int y) {
	centerX = x;
	centerY = y;
	sizeX = 0;
	sizeY = 0;
	speed = 0;
	AliveFlag = 0;
}

EnemyBullet::~EnemyBullet() {}

void EnemyBullet::bulletUpdate() {}

void EnemyBullet::bulletDraw() {}


//誘導軌道
void EnemyBullet::bulletMove(int pcx, int pcy, int ebx, int eby) {
	int PEx = 0;
	int PEy = 0;
	double PE = 0;

	PEx = pcx - ebx;
	PEy = pcy - eby;

	PE = sqrt(PEx * PEx + PEy * PEy);
}

//敵弾座標取得
void EnemyBullet::EnemyBulletPositionGet(int x, int y, int topX1, int topX2, int topY1, int topY2) {
	x = centerX;
	y = centerY;
	topX1 = centerX - sizeX / 2;
	topX2 = centerX + sizeX / 2;
	topY1 = centerY - sizeY / 2;
	topY2 = centerY + sizeY / 2;
}
