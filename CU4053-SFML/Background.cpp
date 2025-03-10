#include "Background.h"

Background::Background()
{
	view.setCenter(600, 337);

	bgTexture.loadFromFile("gfx/Level1_1.png");

	setTexture(&bgTexture);

	setSize(sf::Vector2f(11038, 675));
}

Background::~Background()
{
}

void Background::handleInput(float dt)
{
	if (input->isKeyDown(sf::Keyboard::J))
	{
		view.move(-100 * dt, 0);
		window->setView(view);
	}
	if (input->isKeyDown(sf::Keyboard::L))
	{
		view.move(100 * dt,0);
		window->setView(view);
	}
}
