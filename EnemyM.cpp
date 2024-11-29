#include "EnemyM.h"
#include"EnemyB.h"

EnemyM::EnemyM(const int x, const int y, const int LFM)
{
    centerX = x;//中心座標X
    centerY = y;//中心座標Y
    sizeX = 100;//大きさX
    sizeY = 100;//大きさY
    HitPoint = 1;//体力
    speed = 5;//速度
    LFmode = LFM;//形態状態
}

EnemyM::~EnemyM()
{
    
}

void EnemyM::EnemyUpdate()
{
    if (LFmode == 1)
    {
        centerX -= 5;
    }

    else if (LFmode == 2)
    {
        centerX -= 5;
        //地面に張り付く挙動
    }
}

void EnemyM::EnemyDraw()
{

}