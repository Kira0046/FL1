#include "GameScene.h"

GameScene::GameScene() { 
	enemyMain = new EnemyMain(100, 100, 1); 
}
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