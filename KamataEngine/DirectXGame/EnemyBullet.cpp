#include "EnemyBullet.h"

#include <math.h>

EnemyBullet::EnemyBullet(int x, int y) {
	centerX = x;
	centerY = y;
	sizeX = 0;
	sizeY = 0;
	speed = 0;
	AliveFlag = 1;

	win = WinApp::GetInstance();
	dxCommon_->GetInstance();

	//textureManager1 = TextureManager::GetInstance();
	//textureManager1->Initialize(dxCommon_->GetDevice());
	textureHandle_1 = textureManager1->Load("./Resources/attakeE4.png");

	//ImGuiManager* imguiManager = ImGuiManager::GetInstance();
	//imguiManager->Initialize(win, dxCommon_);

	sprite_1 = Sprite::Create(textureHandle_1, {100, 100}, {1, 1, 1, 1}, {0.0f, 0.0f}, false, false);

	EnemyBulletPosition = sprite_1->GetPosition();
	EnemyBulletPosition.x = (float)centerX;
	EnemyBulletPosition.y = (float)centerY;
	sprite_1->SetPosition(EnemyBulletPosition);
}

EnemyBullet::~EnemyBullet() { delete sprite_1; }

void EnemyBullet::bulletUpdate() {
	if (AliveFlag == 1)
	{
		centerX -= 10;
		EnemyBulletPosition.x = (float)centerX;
		sprite_1->SetPosition(EnemyBulletPosition);
	}
}

void EnemyBullet::bulletDraw() {
	ID3D12GraphicsCommandList* commandList
		= dxCommon_->GetCommandList();
	sprite_1->PreDraw(commandList);

	sprite_1->Draw();

	sprite_1->PostDraw();
}


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
