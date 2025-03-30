#include "../headers/player.h"


Player::Player(sf::Texture texture, sf::RenderWindow& window) :
	m_sprite(texture), m_velocity(10.0f, 10.0f), m_position(100.0f, 100.0f),
	m_speed(300.0f), m_health(100.0f), m_upPressed(true),
	m_downPressed(true), m_leftPressed(true), m_rightPressed(true)
{
	//pointer to engine m_window
	p_window = &window;


};
Player::~Player() {
	//delete player

};


sf::Vector2f Player::getCenter() {
	return sf::Vector2f(m_position.x, m_position.y);
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
		m_position.y -= m_speed * elapsedTime + 10;
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";
		if (m_position.y <= 0) {
			m_position.y = 0;
		}

	}
	if (m_downPressed) {
		m_position.y += m_speed * elapsedTime + 10;
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";
		if (m_position.y >= 550) {
			m_position.y = 550;
		}

	}
	if (m_rightPressed) {
		m_position.x += m_speed * elapsedTime + 10;
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";
		if (m_position.x >= 750) {
			m_position.x = 750;
		}

	}
	if (m_leftPressed) {
		m_position.x -= m_speed * elapsedTime + 10;
		std::cout << "[ " << m_position.x << ", " << m_position.y << " ]\n";
		if(m_position.x <= 0){
			m_position.x = 0;
		}
											
	}																			

	m_sprite.setPosition({ m_position });



}

void Player::draw(sf::RenderWindow& window) {

	window.draw(m_sprite);
	

}

void Player::move() {
	//initialize clock and mouse screen position
	sf::Clock clock;
	sf::Vector2i mouseScreenPosition;

	//event handling through pointer to engine window.
	while (const std::optional event = p_window->pollEvent()) {

		//setting time and position for mouse
		mouseScreenPosition = sf::Mouse::getPosition(*p_window);
		sf::Time time = clock.restart();
		float dt = time.asSeconds();

		//event handling for wasd
		if (event->is<sf::Event::KeyPressed>()) {
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::W)) moveUp();    else    stopUp();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) moveLeft();  else    stopLeft();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)) moveDown();  else    stopDown();
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) moveRight(); else    stopRight();
			//press escape to close
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
				p_window->close();
			}
		}
		update(dt, mouseScreenPosition);
		
		//get elapsed time for  restart fn
		clock.getElapsedTime();
	}

};
