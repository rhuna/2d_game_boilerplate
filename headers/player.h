#pragma once
#ifndef PLAYER_H
#define PLAYER_H


#include <optional>
#include <iostream>
#include "SFML/Graphics.hpp"
#include "Engine.h"
#include "TextureHolder.h"



class Player {
private:


	//private members
	float m_speed;
	float m_health;

	sf::RenderWindow *p_window;


	bool m_upPressed;
	bool m_downPressed;
	bool m_leftPressed;
	bool m_rightPressed;

	int m_tileSize=15;
	

	
	


public:

	//public members
	sf::Vector2f m_position;
	std::vector<float> m_velocity;
	std::vector<float> m_resolution;
	sf::Texture m_texture;
	sf::Sprite m_sprite;


	Player(sf::Texture texture, sf::RenderWindow& window);
	~Player();
	void update(float elapsedTime, sf::Vector2i mousePosition);
	void draw(sf::RenderWindow& window);
	void move();



	sf::Vector2f getCenter();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	void stopRight();
	void stopLeft();
	void stopUp();
	void stopDown();

};







#endif // !PLAYER_H


