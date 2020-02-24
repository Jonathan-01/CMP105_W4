#include "Level.h"


Level::Level(sf::RenderWindow* hwnd, Input* in):map(hwnd)
{
	window = hwnd;
	input = in;

	// initialise game objects
	texture.loadFromFile("gfx/MushroomTrans.png");
	player1.setTexture(&texture);
	player1.setSize(sf::Vector2f(100, 100));
	player1.setPosition(500, 500);
	player1.setInput(input);

	backdrop.loadFromFile("gfx/Level1_1.png");
	map.setTexture(&backdrop);
	map.setSize(sf::Vector2f(11038, 675));
	map.setPosition(0, 0);
	map.setInput(input);
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

	player1.handleInput(dt);
	map.scrollMap(dt);
}

// Update game objects
void Level::update(float dt)
{
	player1.update(dt);
	map.update();
}

// Render level
void Level::render()
{
	beginDraw();

	window->draw(map);
	window->draw(player1);

	endDraw();
}

// clear back buffer
void Level::beginDraw()
{
	window->clear(sf::Color(100, 149, 237));
}

// Ends rendering to the back buffer, and swaps buffer to the screen.
void Level::endDraw()
{
	window->display();
}