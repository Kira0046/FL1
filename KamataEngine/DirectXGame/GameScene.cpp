#include "GameScene.h"



GameScene::GameScene() {
	srand((unsigned int)time(NULL));
	enemyMain = new EnemyMain(100, 100, rand() % 2 + 1); }
GameScene::~GameScene() { 
	enemyMain->~EnemyMain();
	//delete enemyMain; 
}

void GameScene::gameSceneUpdate() { 
	enemyMain->EnemyUpdate(); 
}

void GameScene::gameSceneDraw() { 
	enemyMain->EnemyDraw(); 
}