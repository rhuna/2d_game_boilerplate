#pragma once
#ifndef ENTITY_H
#define ENTITY_H



#include <iostream>
#include "SFML/Graphics.hpp"







class Entity {
private:
	

	
public:

	sf::Texture m_texture;
	sf::Sprite m_sprite;
	Entity();
	Entity(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f resolution);
	~Entity();
	void update();
	void draw();
	

	


};
		




#endif // !ENTITY_H