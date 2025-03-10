#pragma once
#include "Framework/GameObject.h"
class Enemy : public GameObject
{
	float speed;
	float bouncingSpeedX;
	float bouncingSpeedY;
public:
	Enemy();
	~Enemy();

	void update(float dt) override;
	void updateBeachBall(float dt);

	void handleInput(float dt) override;
};

