#include "Map.h"
Map::Map(sf::RenderWindow* hwnd) {
	viewX = 600.f;
	window = hwnd;
	sf::View view(sf::Vector2f(250, 338), sf::Vector2f(1000.f, 600.f));
}

Map::~Map() {

}

void Map::scrollMap(float dt) {

	if (input->isKeyDown(sf::Keyboard::A)) {
		viewX -= 50*dt;
	}
	else if (input->isKeyDown(sf::Keyboard::D)) {
		viewX += 50*dt;
	}
}

void Map::update() {
	sf::View view(sf::Vector2f(viewX, 338), sf::Vector2f(1200.f, 675.f));
	window->setView(view);
}
