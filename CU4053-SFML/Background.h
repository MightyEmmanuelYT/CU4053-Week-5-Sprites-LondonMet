#pragma once
#include "Framework/GameObject.h"
class Background : public GameObject
{
	sf::Texture bgTexture;
	sf::View view;
public:
	Background();
	~Background();

	void handleInput(float dt);
};

