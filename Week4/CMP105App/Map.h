#pragma once
#include "Framework/GameObject.h"

class Map : public GameObject
{
public:
	Map(sf::RenderWindow* hwnd);
	~Map();

	void update();
	void scrollMap(float dt);
	sf::View view;
	float viewX;
	sf::RenderWindow* window;
};

