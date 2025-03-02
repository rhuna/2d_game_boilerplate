#pragma once
#ifndef ENTITY_H
#define ENTITY_H



#include <iostream>
#include "SFML/Graphics.hpp"







class Entity {
private:
	sf::Texture texture;
	sf::Sprite sprite;
	sf::Vector2f position;
	sf::Vector2f velocity;
	sf::Vector2f resolution;

	void setTexture(std::string texturePath);
	void setPosition(sf::Vector2f position);
	void setVelocity(sf::Vector2f velocity);
	void setResolution(sf::Vector2f resolution);

public:

	Entity();
	Entity(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f resolution);
	~Entity();
	void update();
	void draw();
	sf::Vector2f getPosition();
	sf::Vector2f getVelocity();
	sf::Vector2f getResolution();

	sf::Vector2f getCenter();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	void rotateLeft();
	void rotateRight();


};
		




#endif // !ENTITY_H