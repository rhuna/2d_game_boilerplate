#include "../headers/Entity.h"


//public
Entity::Entity() :
	position(sf::Vector2f(0, 0)),
	velocity(sf::Vector2f(0, 0)),
	resolution(sf::Vector2f(0, 0)),
	sprite(texture)

{

};
Entity::Entity(sf::Vector2f position, sf::Vector2f velocity, sf::Vector2f resolution):
	position(position),
	velocity(velocity),
	resolution(resolution),
	sprite(texture)
{

};
Entity::~Entity() {

};
void Entity::update() {

};
void Entity::draw() {

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

};
void Entity::moveRight() {

};
void Entity::moveUp() {

};
void Entity::moveDown() {

};
void Entity::rotateLeft() {

};
void Entity::rotateRight() {

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
