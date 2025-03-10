#include "Player.h"

Player::Player()
{
	playerTexture.loadFromFile("gfx/OGSpiderman.png");

	setTexture(&playerTexture);
	setSize(sf::Vector2f(100, 100));
	setPosition(100, 100);
}

Player::~Player()
{
}

void Player::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::W))//moving Up
	{
		//input->SetKeyUp(sf::Keyboard::W);
		velocity = sf::Vector2f(0, -200);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::A))//moving Left
	{
		//input->SetKeyUp(sf::Keyboard::A);
		velocity = sf::Vector2f(-200, 0);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::S))//moving Down
	{
		//input->SetKeyUp(sf::Keyboard::S);
		velocity = sf::Vector2f(0, 200);
		move(velocity * dt);
	}
	if (input->isKeyDown(sf::Keyboard::D))//moving Right
	{
		//input->SetKeyUp(sf::Keyboard::D);
		velocity = sf::Vector2f(200, 0);
		move(velocity * dt);
	}
}
