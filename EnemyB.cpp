#include "EnemyB.h"
#include<math.h>

EnemyB::EnemyB()
{

}

EnemyB::~EnemyB()
{

}

void EnemyB::bulletUpdate()
{

}

void EnemyB::bulletDraw()
{

}

void EnemyB::bulletMove(int pcx, int pcy, int ebx, int eby)
{
	int PEx = 0;
	int PEy = 0;
	int PE = 0;

	PEx = pcx - ebx;
	PEy = pcy - eby;

	PE = sqrt(PEx * PEx + PEy * PEy);
