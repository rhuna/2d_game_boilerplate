#include "../headers/player.h"

//public


Player::Player() :
	m_sprite(m_texture),
	m_speed(0.0f), m_maxSpeed(0.0f), m_acceleration(0.0f),
	m_deceleration(0.0f), m_angle(sf::degrees(0)),
	m_maxRotation(sf::degrees(0)), m_rotationSpeed(0),
	m_rotation(sf::degrees(0)), m_radius(0.0f),
	m_mass(0.0f), m_health(0.0f), m_maxHealth(0.0f),
	m_damage(0.0f), m_maxDamage(0.0f), m_fireRate(0.0f),
	m_maxFireRate(0.0f), m_fireRange(0.0f), m_maxFireRange(0.0f),
	m_fireSpeed(0.0f), m_maxFireSpeed(0.0f)
{
	
	


	
};
Player::~Player() {
	//delete player

};
void Player::update() {
	//update position




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
sf::Sprite Player::draw() {
	//draw player
	sf::Texture texture;
	if (!texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/player.png")) { // Replace with your texture file
		// Handle texture loading error
		std::cout << "player texture not loaded\n";
	}
	m_texture = texture;
	m_sprite.setTexture(m_texture);
	m_sprite.setPosition({ 400.0f / 2, 300.0f / 2 });
	m_sprite.setScale({ 1, 1 });
	m_sprite.setOrigin({ 0, 0 });
	m_sprite.setRotation(sf::degrees(0));

	return m_sprite;
};




void Player::move() {
	//move player
	//move player forward
	//move player backward
	//move player left
	//move player right
	//move player up
};
void Player::rotate() {
	//rotate player
	//rotate player left
	//rotate player right
	//rotate player up
	//rotate player down

};
void Player::checkBounds() {
	sf::Vector2f position = this->getPosition();
	sf::Vector2u windowSize = sf::Vector2u(1250, 780); // Assuming window size is known

	if (position.x + m_sprite.getGlobalBounds().position.x / 2 >= windowSize.x) {
		m_sprite.setPosition({ windowSize.x - m_sprite.getGlobalBounds().position.x / 2, position.y });
	}
	else if (position.x - m_sprite.getGlobalBounds().position.x / 2 <= 0) {
		m_sprite.setPosition({ m_sprite.getGlobalBounds().position.x / 2, position.y });
	}

	if (position.y + m_sprite.getGlobalBounds().position.y / 2 >= windowSize.y) {
		m_sprite.setPosition({ position.x, windowSize.y - m_sprite.getGlobalBounds().position.y / 2 });
	}
	else if (position.y - m_sprite.getGlobalBounds().position.y / 2 <= 0) {
		m_sprite.setPosition({ position.x, m_sprite.getGlobalBounds().position.y / 2 });
	}
	
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