#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/Mushroom.png");

	testSprite.setTexture(&texture);
	testSprite.setSize(sf::Vector2f(100, 100));
	testSprite.setPosition(500, 100);

	p1.setInput(in);

	enemyTexture1.loadFromFile("gfx/Goomba.png");

	e1.setTexture(&enemyTexture1);
	e1.setSize(sf::Vector2f(100, 100));
	e1.setPosition(sf::Vector2f(300, 300));

	enemyTexture2.loadFromFile("gfx/Beach_Ball.png");

	e2.setTexture(&enemyTexture2);
	e2.setSize(sf::Vector2f(100, 100));
	e2.setPosition(sf::Vector2f(400, 300));
}

Level::~Level()
{

}

// handle user input
void Level::handleInput(float dt)
{
	// Close window on Escape pressed.
	if (input->isKeyDown(sf::Keyboard::Escape))
	{
		window->close();
	}

	p1.handleInput(dt);
}

// Update game objects
void Level::update(float dt)
{
	
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(testSprite);
	window->draw(p1);
	window->draw(e1);
	window->draw(e2);

	endDraw();
}
