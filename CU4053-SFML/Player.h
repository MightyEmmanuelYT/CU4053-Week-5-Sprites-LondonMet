#pragma once
#include "Framework/GameObject.h"
class Player : public GameObject
{
	sf::Texture playerTexture;
public:
	Player();
	~Player();

	void handleInput(float dt) override;
};

