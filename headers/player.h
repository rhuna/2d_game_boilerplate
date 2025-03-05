#pragma oncea
#ifndef PLAYER_H
#define PLAYER_H



#include <iostream>
#include "SFML/Graphics.hpp"
#include "Engine.h"
#include "TextureHolder.h"



class Player {
private:


	//private members
	float m_speed;
	float m_maxSpeed;
	float m_acceleration;
	float m_deceleration;
	
	sf::Angle m_angle;
	sf::Angle m_maxRotation;
	float m_rotationSpeed;
	sf::Angle m_rotation;
	float m_radius;
	float m_mass;
	float m_health;
	float m_maxHealth;
	float m_damage;
	float m_maxDamage;
	float m_fireRate;
	float m_maxFireRate;
	float m_fireRange;
	float m_maxFireRange;
	float m_fireSpeed;
	float m_maxFireSpeed;




	void fire();
	void takeDamage(float damageAmount);
	void die();
	void respawn();
	void upgrade();
	void reset();
	void resetPosition();
	void resetRotation();
	void resetHealth();
	void resetDamage();
	void resetFireRate();
	void resetFireRange();
	void resetFireSpeed();
	void resetAll();

	



public:

	//public members
	sf::Vector2f m_position = { 10.0f,10.0f };
	std::vector<float> m_velocity = { 10.0f,10.0f };
	std::vector<float> m_resolution = { 0,0 };
	sf::Texture m_texture;
	sf::Sprite m_sprite;


	Player(sf::Texture texture);
	~Player();
	void update(float deltaTime);
	void draw(sf::RenderWindow& window);
	void move();
	void rotate();
	void checkBounds();
	void checkCollision();
	void checkCollisionWithWall();
	void checkCollisionWithPlayer();
	void checkCollisionWithBullet();
	

	sf::Vector2f getCenter();
	void moveLeft();
	void moveRight();
	void moveUp();
	void moveDown();
	void rotateLeft();
	void rotateRight();


};







#endif // !PLAYER_H


