#include "EnemyM.h"
#include"EnemyB.h"

EnemyM::EnemyM()
{
    x = 1280;//中心座標X
    y = 360;//中心座標Y
    LFmode = 0;//形態状態
}

EnemyM::~EnemyM()
{
    
}

void EnemyM::EnemyUpdate()
{
    if (LFmode == 1)
    {
        x -= 5;
    }

    else if (LFmode == 2)
    {
        x -= 5;
        //地面に張り付く挙動
    }
}

void EnemyM::EnemyDraw()
{

}