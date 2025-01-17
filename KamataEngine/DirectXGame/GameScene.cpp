#include "GameScene.h"



GameScene::GameScene() {
	srand((unsigned int)time(NULL));
	for (int i = 0; i < 8; i++) {
		enemyMain[i] =
			new EnemyMain(1600+(i * 150), 100, rand() % 2 + 1);
	}
	 }
GameScene::~GameScene() {
	for (int i = 0; i < 8; i++) {
		enemyMain[i]->~EnemyMain();
	}
	//delete enemyMain; 
}

void GameScene::gameSceneUpdate() {
	for (int i = 0; i < 8; i++) {
		enemyMain[i]->EnemyUpdate(); 
	}
}

void GameScene::gameSceneDraw() {
	for (int i = 0; i < 8; i++) {
		enemyMain[i]->EnemyDraw();
	} 
}