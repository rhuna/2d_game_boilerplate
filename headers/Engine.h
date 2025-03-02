#pragma once
#ifndef ENGINE_H
#define ENGINE_H

#include <iostream>
#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Network.hpp>
#include <SFML/System.hpp>
#include <SFML/Window.hpp>


class Engine {
public:
	Engine(sf::VideoMode vm1, sf::Texture bgTexture, sf::Vector2f resolution);
	~Engine();
	void update();
	void draw();
	void run();
	void init();
	void load();
	void unload();
	void close();
	void pause();
	void resume();
	void handleEvents();
	void handleInput();
	void handleCollisions();
	void handlePhysics();
	void handleAI();
	void handleSound();
	void handleNetwork();



private:

	sf::RenderWindow m_window;
	sf::Texture m_texture;
	sf::Sprite m_background;
	sf::CircleShape m_circle;
	sf::Vector2f m_resolution;
	sf::VideoMode m_vm;
	sf::Music m_music;
	sf::SoundBuffer m_buffer;
	sf::Sound m_sound;
	sf::Font m_font;
	sf::Clock m_clock;
	sf::Time m_elapsed;
	sf::Time m_dt;
	bool m_isRunning;
	bool m_isPaused;
	bool m_isLoaded;
	bool m_isClosed;
	bool m_isSoundOn;
	bool m_isMusicOn;
	bool m_isNetworkOn;
	bool m_isAIOn;
	bool m_isPhysicsOn;
	bool m_isCollisionsOn;





};



#endif // !ENGINE_H

