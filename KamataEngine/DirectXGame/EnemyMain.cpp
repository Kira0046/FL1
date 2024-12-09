#include "EnemyMain.h"

//#include <KamataEngine.h>

//#include"TextureManager.h"

EnemyMain::EnemyMain(int x, int y, int LFM) {
	centerX = x;  // 中心座標X
	centerY = y;  // 中心座標Y
	sizeX = 100;  // 大きさX
	sizeY = 100;  // 大きさY
	HitPoint = 1; // 体力
	speed = 5;    // 速度
	LFmode = LFM; // 形態状態
	
	textureManager = TextureManager::GetInstance();
	//textureManager->Initialize()
	textureHandle_ = textureManager->Load("gazou1.png");

	//sprite = nullptr;
	sprite_ = Sprite::Create(textureHandle_, {100, 100});

	bulletlist;
}

EnemyMain::~EnemyMain() { 
	delete sprite_; 
	//delete sprite;
}

void EnemyMain::EnemyUpdate() {
	if (LFmode == 1) {
		centerX -= 5;
	}

	else if (LFmode == 2) {
		centerX -= 5;
		// 地面に張り付く挙動
		EnemyMain::LandEnemyMove(5);
	}

	
}

void EnemyMain::EnemyDraw() { sprite_->Draw(); }

void EnemyMain::LandEnemyMove(int stageY) { centerY = stageY; }

//敵の四隅の座標
void EnemyMain::EnemyPositionGet(int x, int y, 
	int topX1, int topX2, int topY1, int topY2) { 
	x = centerX;
	y = centerY;
	topX1 = centerX - sizeX / 2;
	topX2 = centerX + sizeX / 2;
	topY1 = centerY - sizeY / 2;
	topY2 = centerY + sizeY / 2;
}