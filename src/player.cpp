#include "../headers/player.h"

//public


Player::Player(sf::Texture texture) :
	m_sprite(texture), m_velocity(10.0f,10.0f),
	m_speed(10.0f), m_maxSpeed(10.0f), m_acceleration(0.0f),
	m_deceleration(0.0f), m_angle(sf::degrees(0)),
	m_maxRotation(sf::degrees(0)), m_rotationSpeed(0),
	m_rotation(sf::degrees(0)), m_radius(0.0f),
	m_mass(0.0f), m_health(0.0f), m_maxHealth(0.0f),
	m_damage(0.0f), m_maxDamage(0.0f), m_fireRate(0.0f),
	m_maxFireRate(0.0f), m_fireRange(0.0f), m_maxFireRange(0.0f),
	m_fireSpeed(0.0f), m_maxFireSpeed(0.0f)
{

	
	move();
};
Player::~Player() {
	//delete player

};
void Player::update(float deltaTime) {
	//update position

		//m_position. +=  m_speed * deltaTime; // Update position
		//m_sprite.setPosition(m_position);
		//


	//update rotation
	//update health
	//update damage
	//update fire rate
	//update fire range
	//update fire speed
	//update collision
	//update bounds
	//update movement
	//update rotation
	//update fire
	//update upgrade
	//update reset
	//update respawn
	//update die
	//update take damage




};


sf::Vector2f Player::getCenter() {
	return sf::Vector2f(0, 0);
};
void Player::moveLeft() {
	m_position.x -= m_speed * m_velocity[0];
	m_sprite.setPosition({ m_position.x,m_position.y });
	std::cout << "[" << m_position.x << ", " << m_position.y << "]\n";

};
void Player::moveRight() {
	m_position.x += m_speed * m_velocity[0];
	m_sprite.setPosition({ m_position.x,m_position.y });
	std::cout << "[" << m_position.x << ", " << m_position.y << "]\n";
	

};
void Player::moveUp() {
	m_position.x -= m_speed * m_velocity[1];
	m_sprite.setPosition({ m_position.x,m_position.y });
	std::cout << "[" << m_position.x << ", " << m_position.y << "]\n";
};
void Player::moveDown() {
	m_position.y += m_speed * m_velocity[1];
	m_sprite.setPosition({ m_position.x,m_position.y });
	std::cout << "[" << m_position.x << ", " << m_position.y << "]\n";
};
void Player::rotateLeft() {
	m_sprite.rotate(sf::degrees(-1));
};
void Player::rotateRight() {
	m_sprite.rotate(sf::degrees(1));

};

void Player::draw(sf::RenderWindow& window) {
	
	window.draw(m_sprite);

}

void Player::move() {

	sf::Vector2f direction;
	
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) {
		direction.y = -1.0f;
		this->moveUp();
		//checkBounds();
		//checkCollision();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) {
		direction.y = 1.0f;
		this->moveDown();
		//checkBounds();
		//checkCollision();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
		direction.x = -1.0f;
		this->moveLeft();
		this->rotateLeft();
		//checkBounds();
		//checkCollision();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
		direction.x = 1.0f;
		this->moveRight();
		this->rotateRight();
		//checkBounds();
		//checkCollision();
	}
};
void Player::rotate() {
	//rotate player
	//rotate player left
	//rotate player right
	//rotate player up
	//rotate player down

};
void Player::checkBounds() {
	//sf::Vector2f position = this->getPosition();
	//sf::Vector2u windowSize = sf::Vector2u(1250, 780); // Assuming window size is known
	//
	//if (position.x + m_sprite.getGlobalBounds().position.x / 2 >= windowSize.x) {
	//	m_sprite.setPosition({ windowSize.x - m_sprite.getGlobalBounds().position.x / 2, position.y });
	//}
	//else if (position.x - m_sprite.getGlobalBounds().position.x / 2 <= 0) {
	//	m_sprite.setPosition({ m_sprite.getGlobalBounds().position.x / 2, position.y });
	//}
	//
	//if (position.y + m_sprite.getGlobalBounds().position.y / 2 >= windowSize.y) {
	//	m_sprite.setPosition({ position.x, windowSize.y - m_sprite.getGlobalBounds().position.y / 2 });
	//}
	//else if (position.y - m_sprite.getGlobalBounds().position.y / 2 <= 0) {
	//	m_sprite.setPosition({ position.x, m_sprite.getGlobalBounds().position.y / 2 });
	//}
	
};
void Player::checkCollision() {
	//check collision with wall
	//check collision with player
	//check collision with bullet

};
void Player::checkCollisionWithWall() {
	//check if player is colliding with wall
	//if player is colliding with wall
	//bounce player off wall
	//else
	//do nothing

};
void Player::checkCollisionWithPlayer() {
	//check if player is colliding with player
	//if player is colliding with player
	//bounce player off player
	//else
	//do nothing


};
void Player::checkCollisionWithBullet() {
	//check if player is colliding with bullet
	//if player is colliding with bullet
	//take damage
	//else
	//do nothing
};






//private

void Player::fire() {
	//create bullet
	
	//set bullet position
	//set bullet rotation
	//set bullet damage
	//set bullet speed
	//set bullet range
};
void Player::takeDamage(float damageAmount) {
	m_health -= damageAmount;
	if (m_health <= 0) {
		die();
	}

};
void Player::die() {
	//reset position
	//reset rotation
	//reset health
	//reset damage
	//reset fire rate
	//reset fire range
	//reset fire speed
	//reset all

};
void Player::respawn() {
	//reset position
	//reset rotation
	//reset health
	//reset damage
	//reset fire rate
	//reset fire range
	//reset fire speed
	//reset all

};
void Player::upgrade() {
	//increase damage
	//increase fire rate
	//increase fire range
	//increase fire speed

};
void Player::reset() {
	//reset position
	//reset rotation
	//reset health
	//reset damage
	//reset fire rate
	//reset fire range
	//reset fire speed
	//reset all

};
void Player::resetPosition() {
	//set position to center of screen
	//set rotation to 0
	
};
void Player::resetRotation() {
	//set rotation to 0

};
void Player::resetHealth() {
	//set health to max health

};
void Player::resetDamage() {
	//set damage to max damage

};
void Player::resetFireRate() {
	//set fire rate to max fire rate
};
void Player::resetFireRange() {
	//set fire range to max fire range

};
void Player::resetFireSpeed() {
	//set fire speed to max fire speed

};
void Player::resetAll() {
	//reset position
	//reset rotation
	//reset health
	//reset damage
	//reset fire rate
	//reset fire range
	//reset fire speed
	
};