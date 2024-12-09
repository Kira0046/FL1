#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <list>
#include"EnemyBullet.h"
#include <KamataEngine.h>

using namespace KamataEngine;
class EnemyMain {

private:
	int centerX = 0;  // 中心座標X
	int centerY = 0;  // 中心座標Y
	int sizeX = 0;    // 大きさX
	int sizeY = 0;    // 大きさY
	int HitPoint = 0; // 体力
	int speed = 0;    // 速度
	int LFmode = 0;   // 形態状態

	// テクスチャハンドル
	uint32_t textureHandle_ = 0;
	TextureManager* textureManager = TextureManager::GetInstance();

	//スプライト
	//Sprite* sprite = nullptr;
	Sprite* sprite_ = nullptr;

	// リスト
	std::list<EnemyBullet*> bulletlist
	 = std::list<EnemyBullet*>();

public:
	// リスト初期化
	EnemyMain(int x, int y, int LFM);
	~EnemyMain();

	void EnemyUpdate();
	void EnemyDraw();

	//下に張り付く挙動
	void LandEnemyMove(int stageY);

	//敵の四隅の座標取得
	void EnemyPositionGet(int x,int y,
		int topX1,int topX2, int topY1,int topY2);
};
