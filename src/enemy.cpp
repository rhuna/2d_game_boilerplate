#include "../headers/enemy.h"
#include "../headers/player.h"




Enemy::Enemy(sf::Texture texture, sf::RenderWindow &window) :
	m_texture(texture), m_sprite(m_texture), p_window(&window)
{
	//initialize enemy position
	//m_position = { 100,100 };
	//initialize enemy sprite

	m_sprite.setPosition({ 0,0});
	//we need the enemy to wait until player gets close enough
	//before the enemy begins to go after the player

};
Enemy::~Enemy() {

}

sf::Texture Enemy::getTexture()
{
	return m_texture;
}

sf::Sprite Enemy::getSprite()
{
	return m_sprite;
}


void Enemy::update(float elapsedTime, Player player){
	//update will update position according to the closeness to the player
	//and will update the sprite position
	if (player.getCenter().x - m_position.x < 100 && player.getCenter().y - m_position.y < 100) {
		//move towards player
		if (player.getCenter().x > m_position.x) {
			m_velocity[0] = 1.0f;
			m_sprite.setRotation(sf::degrees(0));
		}
		else {
			m_velocity[0] = -1.0f;
			m_sprite.setRotation(sf::degrees(180));
		}
		if (player.getCenter().y > m_position.y) {
			m_velocity[1] = 1.0f;
			m_sprite.setRotation(sf::degrees(90));
		}
		else {
			m_velocity[1] = -1.0f;
			m_sprite.setRotation(sf::degrees(270));
		}
		m_position.x += m_velocity[0];
		m_position.y += m_velocity[1];
		m_sprite.setPosition(m_position);

	}
	//m_position.x += m_velocity[0];
	//m_position.y += m_velocity[1];
	//m_sprite.setPosition(m_position);

}


