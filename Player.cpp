#include "Player.h"

Player::Player()
{

}

Player::~Player()
{

}

void Player::playerInitialize()
{
	input_ = Input::GetInstance();
	textureHandlePlayer_ = TextureManager::Load("player.png");
	spritePlayer_ = Sprite::Create(textureHandlePlayer_, { 0,0 });
}

void Player::playerUpdate()
{
	if (playerFlag == 0)
	{
		playerReset();
	}
	if (playerFlag == 1)
	{
		playerMove();
	}
}

void Player::playerMove()
{
	// 移動
	// 右へ移動
	if (input_->PushKey(DIK_RIGHT)) {
		playerX += 1;
	}
	//// 左へ移動
	if (input_->PushKey(DIK_LEFT)) {
		playerX -= 1;
	}
	// 右へ移動
	if (input_->PushKey(DIK_DOWN)) {
		playerY += 1;
	}
	//// 左へ移動
	if (input_->PushKey(DIK_UP)) {
		playerY -= 1;
	}
}

void Player::playerReset()
{
	playerX = 200;
	playerY = 400;
}

void Player::playerDraw()
{
	spritePlayer_->SetSize({ 64,64 });
	spritePlayer_->Draw();
}