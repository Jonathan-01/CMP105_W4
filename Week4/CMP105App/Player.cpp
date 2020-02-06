#include "Player.h"
Input* input;

Player::Player() {
	//velocity.x = 0;
	//velocity.y = 0;
}

Player::~Player() {

}

void Player::handleInput(float dt) {
	if (input->isKeyDown(sf::Keyboard::W)) {
		setVelocity(0,-5);
		input->setKeyUp(sf::Keyboard::W);
	}
	else if (input->isKeyDown(sf::Keyboard::A)) {
		setVelocity(-5,0);
		input->setKeyUp(sf::Keyboard::A);
	}
	else if (input->isKeyDown(sf::Keyboard::S)) {
		setVelocity(0, 5);
		input->setKeyUp(sf::Keyboard::S);
	}
	else if (input->isKeyDown(sf::Keyboard::D)) {
		setVelocity(5, 0);
		input->setKeyUp(sf::Keyboard::D);
	}
}