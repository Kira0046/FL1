#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <KamataEngine.h>

using namespace KamataEngine;
class EnemyBullet {

private:
	int centerX = 0;
	int centerY = 0;
	int sizeX = 0;
	int sizeY = 0;
	int speed = 0;
	int AliveFlag = 1;

	Vector2 EnemyBulletPosition = {0, 0};

	// テクスチャハンドル
	uint32_t textureHandle_1 = 0;
	TextureManager* textureManager1 = TextureManager::GetInstance();

	// スプライト
	// Sprite* sprite = nullptr;
	Sprite* sprite_1 = nullptr;

	DirectXCommon* dxCommon_ = DirectXCommon::GetInstance();
	WinApp* win = nullptr;

public:
	EnemyBullet(int x, int y);
	~EnemyBullet();

	void bulletUpdate();

	void bulletDraw();

	void bulletMove(int pcx /*自機の中心座標xの代入*/, int pcy /*自機の中心座標xの代入*/, int ebx /*敵の球の中心座標xの代入*/, int eby /*敵の球の中心座標yの代入*/);

	void EnemyBulletPositionGet(int x, int y, int topX1, int topX2, int topY1, int topY2);
};
