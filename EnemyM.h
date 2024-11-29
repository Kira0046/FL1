#pragma once
#include <stdio.h>
#include <stdlib.h>


class EnemyM
{
private:
    int x;//中心座標X
    int y;//中心座標Y
    int sizeX;//大きさX
    int sizeY;//大きさY
    int speed;//速度
    int HitPoint;//体力
    int LFmode;//形態状態


public:

    //リスト初期化
    EnemyM();
    ~EnemyM();

    void EnemyUpdate();
    void EnemyDraw();
};

