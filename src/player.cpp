#include "../headers/player.h"

//public


Player::Player(sf::Texture texture) :
	m_sprite(texture), m_velocity(10.0f, 10.0f),m_position(100,100),
	m_speed(300.0f), m_health(100.0f), m_upPressed(true), 
	m_downPressed(true), m_leftPressed(true),m_rightPressed(true)
{


	
	m_sprite.setPosition(m_position);

	//move();
};
Player::~Player() {
	//delete player

};


sf::Vector2f Player::getCenter() {
	return sf::Vector2f(0, 0);
};

void Player::moveRight() {
	m_rightPressed = true;
};
void Player::moveLeft() {
	m_leftPressed = true;
};
void Player::moveUp() {
	m_upPressed = true;
};
void Player::moveDown() {
	m_downPressed = true;
};
void Player::stopRight() {
	m_rightPressed = false;
};
void Player::stopLeft() {
	m_leftPressed = false;
};
void Player::stopUp() {
	m_upPressed = false;
};
void Player::stopDown() {
	m_downPressed = false;
};


//will call this function once every frame
void Player::update(float elapsedTime, sf::Vector2i mousePosition) {			//
	std::cout << elapsedTime << "\n";											//
	if (m_upPressed) {															//
		m_position.y -= m_speed;								//
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";	//
		m_sprite.setPosition({ m_position });									//
	}																			//
	if (m_downPressed) {														//
		m_position.y += m_speed;								//
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";	// problem is that m_position is being reset every frame
		m_sprite.setPosition({ m_position });									//
	}																			//
	if (m_rightPressed) {														//
		m_position.x += m_speed;								// another issue is that m_position components arent stopping
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";	// upon keyRelease
		m_sprite.setPosition({ m_position });									//
	}																			//
	if (m_leftPressed) {														//
		m_position.x -= m_speed;								//
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";	//
		m_sprite.setPosition({ m_position });									//
	}																			//

	
}

void Player::rotateLeft() {
	m_sprite.rotate(sf::degrees(-45));
};
void Player::rotateRight() {
	m_sprite.rotate(sf::degrees(45));

};

void Player::draw(sf::RenderWindow& window) {

	//update(seconds, mouseScreenPosition);
	window.draw(m_sprite);
	//clock.restart();

}

void Player::move() {

	sf::Vector2f direction;

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
			direction.y = -1.0f;
			moveUp();
			//checkBounds();
			//checkCollision();
		}
		else  {
			stopUp();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
			direction.y = 1.0f;
			moveDown();
			//checkBounds();
			//checkCollision();
		}
		else  {
			stopDown();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
			direction.x = -1.0f;
			moveLeft();
			//player1.rotateLeft();
			//checkBounds();
			//checkCollision();
		}
		else {
			stopLeft();
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
			direction.x = 1.0f;
			moveRight();
			//player1.rotateRight();
			//checkBounds();
			//checkCollision();
		}
		else {
			stopRight();
		}	
	
		

};
