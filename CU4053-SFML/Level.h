#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/GameObject.h"
#include <string.h>
#include <iostream>
#include "Player.h"
#include "Enemy.h"
#include "Cursor.h"
#include "Background.h"


class Level : BaseLevel {
public:
	Level(sf::RenderWindow* hwnd, Input* in);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override;
	void render() override;

private:
	// Level objects
	GameObject testSprite;
	sf::Texture texture;

	Player p1;

	sf::Texture enemyTexture1;
	sf::Texture enemyTexture2;
	Enemy e1, e2;

	Cursor mousePointer;

	Background bg;
};