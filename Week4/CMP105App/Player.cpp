#include "Player.h"

Player::Player() {
}

Player::~Player() {

}

void Player::handleInput(float dt) {
	if (input->isKeyDown(sf::Keyboard::W)) {
		move(0,-50 *dt);
	}
	else if (input->isKeyDown(sf::Keyboard::A)) {
		move(-50 *dt,0);
	}
	else if (input->isKeyDown(sf::Keyboard::S)) {
		move(0, 50 *dt);
	}
	else if (input->isKeyDown(sf::Keyboard::D)) {
		move(50 *dt, 0);
	}
}