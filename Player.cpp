#include "Player.h"

void Player::playerInitialize()
{
	input_ = Input::GetInstance();
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
	// 右へ移動と右の移動範囲制限
	if (input_->PushKey(DIK_RIGHT)) {
		playerX += 1;
	}
	//// 左へ移動と左の移動範囲制限
	if (input_->PushKey(DIK_LEFT)) {
		playerX -= 1;
	}
}

void Player::playerReset()
{
	playerX = 200;
	playerY = 400;
}

void Player::playerDraw()
{

}