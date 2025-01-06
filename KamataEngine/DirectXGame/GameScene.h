#pragma once
#include"EnemyMain.h"
class GameScene {
private:
	EnemyMain* enemyMain = nullptr;

public:
	GameScene();
	~GameScene();

	void gameSceneUpdate();
	void gameSceneDraw();
};
