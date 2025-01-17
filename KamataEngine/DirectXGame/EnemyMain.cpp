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

	win = WinApp::GetInstance();
	//win->CreateGameWindow();
	//dxCommon_->Initialize(win);
	dxCommon_->GetInstance();

	textureManager = TextureManager::GetInstance();
	textureManager->Initialize(dxCommon_->GetDevice());
	textureHandle_ = textureManager->Load("./Resources/gazou1.png");

	//sprite = nullptr;
	//sprite_->Initialize();
	ImGuiManager* imguiManager = ImGuiManager::GetInstance();
	imguiManager->Initialize(win, dxCommon_);

	sprite_=Sprite::Create(textureHandle_, {100, 100}, 
		{1, 1, 1, 1}, {0.0f, 0.0f}, false, false);

	EnemyMainPosition = sprite_->GetPosition();
	EnemyMainPosition.x = (float)centerX;
	EnemyMainPosition.y = (float)centerY;
	sprite_->SetPosition(EnemyMainPosition);

	bulletlist;
}

EnemyMain::~EnemyMain() { 
	delete sprite_; 
	//delete sprite;
}

void EnemyMain::EnemyUpdate() {
	if (LFmode == 1) {
		centerX -= 5;
		EnemyMainPosition.x = (float)centerX;
		sprite_->SetPosition(EnemyMainPosition);
	}

	else if (LFmode == 2) {
		centerX -= 5;
		EnemyMainPosition.x = (float)centerX;
		// 地面に張り付く挙動
		EnemyMain::LandEnemyMove(5);
		sprite_->SetPosition(EnemyMainPosition);
	}

	
}

void EnemyMain::EnemyDraw() {
	ID3D12GraphicsCommandList* commandList
		= dxCommon_->GetCommandList();
	sprite_->PreDraw(commandList);

	sprite_->Draw(); 

	sprite_->PostDraw();
}

void EnemyMain::LandEnemyMove(int stageY) {
	centerY = stageY;
	EnemyMainPosition.y = (float)centerY;
}

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