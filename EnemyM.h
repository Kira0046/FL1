#pragma once
#include <stdio.h>
#include <stdlib.h>


class EnemyM
{
private:
    int centerX;//中心座標X
    int centerY;//中心座標Y
    int sizeX;//大きさX
    int sizeY;//大きさY
    int HitPoint;//体力
    int LFmode;//形態状態


public:

    //リスト初期化
    EnemyM();
    ~EnemyM();

    void EnemyUpdate();
    void EnemyDraw();
};

