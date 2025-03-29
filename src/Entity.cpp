#include "../headers/Entity.h"


//public
Entity::Entity() :
	m_sprite(m_texture)
{
	//texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/background.png");
	//sprite.setTexture(texture);
	//sprite.setPosition(0, 0);
	//sprite.setScale(1, 1);
	//sprite.setOrigin(0, 0);
	//sprite.setRotation(0);
	//sprite.setColor(sf::Color(255, 255, 255, 255));
	//sprite.setTextureRect(sf::IntRect(0, 0, 800, 600));

};
Entity::Entity(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f resolution) :
	//m_position(position),
	//m_velocity(velocity),
	//m_resolution(resolution),
	m_sprite(m_texture)
{
	//texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/background.png");
	m_sprite.setTexture(m_texture);
	//sprite.setPosition(0, 0);
	//sprite.setScale(1, 1);
	//sprite.setOrigin(0, 0);
	//sprite.setRotation(0);
	//sprite.setColor(sf::Color(255, 255, 255, 255));
	//sprite.setTextureRect(sf::IntRect(0, 0, 800, 600));

};
Entity::~Entity() {
	//delete texture;

};
void Entity::update() {
	//sprite.setPosition(position);
	//sprite.setScale(1, 1);
	//sprite.setOrigin(0, 0);
	//sprite.setRotation(0);
	//sprite.setColor(sf::Color(255, 255, 255, 255));
	//sprite.setTextureRect(sf::IntRect(0, 0, 800, 600));
};
void Entity::draw() {
	//window.draw(sprite);
};

