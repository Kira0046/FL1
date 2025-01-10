#pragma once

#include <DirectXMath.h>

class GameScene {
private:

	GameScene();
	~GameScene();
	void Initialuze();

public:

	void Update();

	void Draw();

	uint32_t textureHandlePlayer_ = 0;
	Sprite* spritePlayer_ = 0;

	Input* input_ = nullptr;

};


