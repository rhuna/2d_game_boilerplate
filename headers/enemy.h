#pragma once
#ifndef ENEMY_H
#define ENEMY_H


#include <optional>
#include <iostream>
#include "SFML/Graphics.hpp"
#include "Engine.h"
#include "TextureHolder.h"
#include "Entity.h"

class Enemy : private Entity {
private:
	
	sf::RenderWindow* p_window;
	sf::Vector2f m_position;
	std::vector<float> m_velocity = { 1.0f,1.0f };
	std::vector<float> m_resolution;
	sf::Texture m_texture;
	sf::Sprite m_sprite;


	

public:

	Enemy(sf::Texture texture, sf::RenderWindow& window);
	~Enemy();
	sf::Texture getTexture();
	sf::Sprite getSprite();
	void update(float elapsedTime, Player player);
	void draw(sf::RenderWindow& window);
	void moveToward(Player &player);



};





#endif // !ENEMY_H

