#pragma once
#include"EnemyMain.h"
class GameScene {
private:
	EnemyMain* enemyMain;

public:
	GameScene();
	~GameScene();

	void gameSceneUpdate();
	void gameSceneDraw();
};
