#include "Player.h"

Player::Player() {
}

Player::~Player() {

}

void Player::handleInput(float dt) {
	if (input->isKeyDown(sf::Keyboard::W)) {
		move(0,-60 *dt);
	}
	else if (input->isKeyDown(sf::Keyboard::S)) {
		move(0, 60 *dt);
	}
	if (input->isKeyDown(sf::Keyboard::A)) {
		move(-60 * dt, 0);
	}
	else if (input->isKeyDown(sf::Keyboard::D)) {
		move(60 *dt, 0);
	}
}