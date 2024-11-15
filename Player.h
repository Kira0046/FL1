#pragma once


class Player
{
public:
	void playerInitialize();	// 初期化
	void playerUpdate();		// 更新
	void playerDraw();			// 描画
private:
	int playerX;		// X軸
	int playerY;		// Y軸
	int playersizeX;	// プレイヤーサイズX軸
	int playersizeY;	// プレイヤーサイズY軸
	int playerspeed;	// スピード値
	int playerflag;		// 生存フラグ

	// 画像
	int playerGraph = LoadGraph("Resources/Player.png");
};