#include "../headers/Entity.h"


//public
Entity::Entity() :
	position(sf::Vector2f(0, 0)),
	velocity(sf::Vector2f(0, 0)),
	resolution(sf::Vector2f(0, 0)),
	sprite(texture)

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
Entity::Entity(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f resolution):
	position(position),
	velocity(velocity),
	resolution(resolution),
	sprite(texture)
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
sf::Vector2f Entity::getPosition() {
	return position;
};
sf::Vector2f Entity::getVelocity() {
	return velocity;
};
sf::Vector2f Entity::getResolution() {
	return resolution;
};

sf::Vector2f Entity::getCenter() {
	return sf::Vector2f(0, 0);
};
void Entity::moveLeft() {
	//position.x -= velocity.x;
};
void Entity::moveRight() {
	//position.x += velocity.x;

};
void Entity::moveUp() {
	//position.y -= velocity.y;

};
void Entity::moveDown() {
	//position.y += velocity.y;

};
void Entity::rotateLeft() {
	//sprite.rotate(-1);
};
void Entity::rotateRight() {
	//sprite.rotate(1);

};




//private



void Entity::setTexture(std::string texturePath) {

};
void Entity::setPosition(sf::Vector2f position) {

};
void Entity::setVelocity(sf::Vector2f velocity) {

};
void Entity::setResolution(sf::Vector2f resolution) {

};
