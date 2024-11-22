#pragma once
#include "Input.h"


class Player
{
public:	// メンバ関数
	void playerInitialize();	// 初期化
	void playerUpdate();		// 更新
	void playerMove();			// 動作
	void playerReset();			// リセット
	void playerDraw();			// 描画
private: // メンバ変数
	int playerX;			// X軸
	int playerY;			// Y軸
	int playerR = 15;		// 判定
	int playerSizeX;		// X軸サイズ変更
	int playerSizeY;		// Y軸サイズ変更
	int playerSpeed;		// スピード値
	int playerFlag = 0;		// 生存フラグ

	Input* input_ = nullptr;
};