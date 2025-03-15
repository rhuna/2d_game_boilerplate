#pragma once
#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>
#include "player.h"
#include "TextureHolder.h"
#include <optional>


class Engine {
public:

	


	enum class State {
		PAUSED, LEVELING_UP, GAMEOVER, PLAYING
	};
	State state = State::GAMEOVER;



	Engine(sf::VideoMode vm1);
	~Engine();
	void run();
	void close();
	void handleEvents();
	void handleInput();
	void handleCollisions();
	

private:

	void init();
	void load();
	void unload();
	void update();
	void draw();
	TextureHolder th;
	sf::RenderWindow m_window;
	sf::Texture m_texture;
	sf::Sprite m_background;
	sf::Vector2f m_resolution;
	sf::VideoMode m_vm;
	sf::Music m_music;
	sf::SoundBuffer m_buffer;
	sf::Sound m_sound;
	sf::Font m_font;
	sf::Clock m_clock;
	sf::Time m_elapsed;
	sf::Time m_dt;




};



#endif // !ENGINE_H


