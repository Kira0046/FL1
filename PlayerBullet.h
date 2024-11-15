#pragma once


class PlayerBullet
{
public:
	void playerBulletInitialize();	// 初期化
	void playerBulletUpdate();		// 更新
	void playerBulletDraw();			// 描画
private:
	int playerBulletX;		// X軸
	int playerBulletY;		// Y軸
	int playerBulletsizeX;	// プレイヤーサイズX軸
	int playerBulletsizeY;	// プレイヤーサイズY軸
	int playerBulletspeed;	// スピード値
	int playerBulletflag;	// 生存フラグ

	// 画像
	int playerBulletGraph = LoadGraph("Resources/PlayerBullet.png");
};