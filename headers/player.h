#pragma once
#ifndef PLAYER_H
#define PLAYER_H



#include <iostream>
#include "SFML/Graphics.hpp"
#include "Entity.h"
#include "Engine.h"



class Player : public Entity {
private:

	sf::Texture m_texture;
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
	sf::Sprite m_sprite;

	Player();
	~Player();
	void update();
	sf::Sprite draw();
	void move();
	void rotate();
	void checkBounds();
	void checkCollision();
	void checkCollisionWithWall();
	void checkCollisionWithPlayer();
	void checkCollisionWithBullet();





};







#endif // !PLAYER_H


