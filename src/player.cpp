#include "../headers/player.h"

//public


Player::Player(sf::Texture texture) :
	m_sprite(texture), m_velocity(10.0f, 10.0f),
	m_speed(300.0f), m_maxSpeed(13.0f), m_acceleration(4.0f),
	m_deceleration(2.0f), m_angle(sf::degrees(20)),
	m_maxRotation(sf::degrees(360)), m_rotationSpeed(5),
	m_rotation(sf::degrees(15)), m_radius(1.0f),
	m_mass(80.0f), m_health(100.0f), m_maxHealth(300.0f),
	m_damage(0.0f), m_maxDamage(5.0f), m_fireRate(1.0f),
	m_maxFireRate(1.0f), m_fireRange(10.0f), m_maxFireRange(1.0f),
	m_fireSpeed(1.0f), m_maxFireSpeed(1.0f)
{
	//m_sprite.setPosition({ m_position.x, m_position.y });
	m_sprite.setOrigin(m_sprite.getGlobalBounds().position);

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
void Player::update(float elapsedTime, sf::Vector2i mousePosition) {
	std::cout << elapsedTime << "\n";
	if (m_upPressed) {
		m_position.y -= m_speed * (elapsedTime);
	}
	if (m_downPressed) {
		m_position.y += m_speed * (elapsedTime);
	}
	if (m_rightPressed) {
		m_position.x += m_speed * (elapsedTime);
	}
	if (m_leftPressed) {
		m_position.x -= m_speed * (elapsedTime);
	}

	m_sprite.setPosition({ m_position });
	//keep the player in the arena
	// 
	//right side of screen
	if (m_position.x > 1000 / 2 - m_tileSize) {
		m_position.x = 1000 / 2 - m_tileSize;
	}
	//left side of the screen
	if (m_position.x < 10 - m_tileSize) {
		m_position.x = 10 - m_tileSize;
	}
	//bottom side of screen
	if (m_position.y > 500 / 2 - m_tileSize) {
		m_position.y = 500 / 2 - m_tileSize;
	}
	//top of the screen
	if (m_position.y < -m_tileSize * 2) {
		m_position.y = -m_tileSize * 2;
	}
	
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

void Player::move(sf::RenderWindow& window) {

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