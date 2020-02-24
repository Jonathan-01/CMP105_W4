#include "Map.h"
Map::Map(sf::RenderWindow* hwnd) {
	viewX = 300.f;
	window = hwnd;
	sf::View view(sf::Vector2f(500, 338), sf::Vector2f(300.f, 200.f));
}

Map::~Map() {

}

void Map::scrollMap(float dt) {

	if (input->isKeyDown(sf::Keyboard::A)) {
		viewX += 50;
	}
	else if (input->isKeyDown(sf::Keyboard::D)) {
		viewX -= 50;
	}
}

void Map::update() {
	sf::View view(sf::Vector2f(viewX, 338), sf::Vector2f(300.f, 200.f));
	window->setView(view);
}
