#include "../headers/Engine.h"





Engine::Engine(sf::VideoMode vm1, sf::Texture bgTexture, sf::Vector2f resolution) :
	m_resolution(sf::Vector2f({1250,780})),
	m_vm({1250,780}, 32),
	m_window(vm1, "boilerplate"),
	m_texture(bgTexture),
	m_background(bgTexture),
	m_sound(m_sound),
	m_dt(),
	m_isRunning(true),
	m_isPaused(false),
	m_isLoaded(false),
	m_isClosed(false),
	m_isSoundOn(true),
	m_isMusicOn(true),
	m_isNetworkOn(false),
	m_isAIOn(false)	
{
	std::cout << "Engine Started\n";

};


Engine::~Engine() {

};


void Engine::update() {
	handleEvents();
	handleInput();
	handleCollisions();
	handlePhysics();
	handleAI();
	handleSound();
	handleNetwork();
};


void Engine::draw() {
	m_window.clear();
	m_window.draw(m_background);
	m_window.draw(m_circle);
	m_window.display();
};



void Engine::run() {
	init();
	load();
	while (m_window.isOpen()) {
		sf::Sprite background(m_texture);
		m_background = background;
		sf::CircleShape circle(100);

		circle.setFillColor(sf::Color::Green);

		draw();
		update();
		
		
	}
	unload();
	close();
};


void Engine::init() {
	std::cout << "Engine initialized" << std::endl;
};

	
void Engine::load() {
	std::cout << "Engine loaded" << std::endl;
};

	
void Engine::unload() {
	std::cout << "Engine unloaded" << std::endl;
};
	
	
void Engine::close() {
	std::cout << "Engine closed" << std::endl;
};

	
	
void Engine::pause() {
	std::cout << "Engine paused" << std::endl;
};

	
void Engine::resume() {
	std::cout << "Engine resumed" << std::endl;
};
	
	
void Engine::handleEvents() {
	std::cout << "Engine handled events" << std::endl;
};

	
	
void Engine::handleInput() {
	std::cout << "Engine handled input" << std::endl;
};

		
void Engine::handleCollisions() {
	std::cout << "Engine handled collisions" << std::endl;
};	

	
	
void Engine::handlePhysics() {
	std::cout << "Engine handled physics" << std::endl;
};

	
	
void Engine::handleAI() {
	std::cout << "Engine handled AI" << std::endl;
};

	
		
void Engine::handleSound() {
	std::cout << "Engine handled sound" << std::endl;
};


	
	
void Engine::handleNetwork() {
	std::cout << "Engine handled network" << std::endl;
};