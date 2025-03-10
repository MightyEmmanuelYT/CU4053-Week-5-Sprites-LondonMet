#include "Enemy.h"

Enemy::Enemy()
{
	speed = 500;
	bouncingSpeedX = 300;
	bouncingSpeedY = 300;
}

Enemy::~Enemy()
{
}

void Enemy::update(float dt)
{
	move(sf::Vector2f(speed*dt, 0));
	if (getPosition().x > window->getSize().x-getSize().x)
	{
		speed = -500;
	}
	if (getPosition().x < 0)
	{
		speed = 500;
	}
}

void Enemy::updateBeachBall(float dt)
{
	move(bouncingSpeedX * dt, bouncingSpeedY * dt);
	if (getPosition().x <= 0 || getPosition().x >= window->getSize().x-getSize().x)
	{
		bouncingSpeedX = -bouncingSpeedX;
	}
	if (getPosition().y <= 0 || getPosition().y >= window->getSize().y-getSize().y)
	{
		bouncingSpeedY = -bouncingSpeedY;
	}
}

void Enemy::handleInput(float dt)
{
	//Increase Speed
	if (input->isKeyDown(sf::Keyboard::Right))
	{
		input->setKeyUp(sf::Keyboard::Right);
		bouncingSpeedX += 100.f;
		bouncingSpeedY += 100.f;
	}

	//Decreasing Speed
	if (input->isKeyDown(sf::Keyboard::Left))
	{
		input->setKeyUp(sf::Keyboard::Left);
		bouncingSpeedX += -100;
		bouncingSpeedY += -100;
	}
}
