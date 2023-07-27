#pragma once
#include "MyVector3.h"

struct  Ball
{
	MyVector3 position; // 位置
	MyVector3 velocity; // 速度
	MyVector3 acceleration; // 加速度
	float mass; // 質量
	float radius; // 半径
	unsigned int color; // 色

};
