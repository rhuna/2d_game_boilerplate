#pragma once
#ifndef PLAYER_H
#define PLAYER_H



#include <iostream>
#include "SFML/Graphics.hpp"

#include "Entity.h"


class Player : Entity {
private:

	float speed;
	float maxSpeed;
	float acceleration;
	float deceleration;
	sf::Angle angle;
	sf::Angle maxRotation;
	float rotationSpeed;
	sf::Angle rotation;
	float radius;
	float mass;
	float health;
	float maxHealth;
	float damage;
	float maxDamage;
	float fireRate;
	float maxFireRate;
	float fireRange;
	float maxFireRange;
	float fireSpeed;
	float maxFireSpeed;


	
	void fire();
	void takeDamage();
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

	Player();
	~Player();
	void update();
	void draw();
	void move();
	void rotate();
	void checkBounds();
	void checkCollision();
	void checkCollisionWithWall();
	void checkCollisionWithPlayer();
	void checkCollisionWithBullet();





};







#endif // !PLAYER_H


