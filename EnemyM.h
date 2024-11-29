#pragma once
#include <stdio.h>
#include <stdlib.h>


class EnemyM
{
private:
    int centerX = 0;//中心座標X
    int centerY = 0;//中心座標Y
    int sizeX = 0;//大きさX
    int sizeY = 0;//大きさY
    int HitPoint = 0;//体力
    int speed = 0;//速度
    int LFmode = 0;//形態状態


public:

    //リスト初期化
    EnemyM(const int x, const int y, const int LFM);
    ~EnemyM();

    void EnemyUpdate();
    void EnemyDraw();
};

