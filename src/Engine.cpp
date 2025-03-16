#include "../headers/Engine.h"



/// <summary>
/// private functions
/// </summary>
/// <param name="vm1"></param>

Engine::Engine(sf::VideoMode vm1) :
	m_resolution(sf::Vector2f({ 1250,1250 })),
	m_vm(vm1),
	m_window(m_vm, "boilerplate"),
	m_background(m_texture),
	m_sound(m_sound),
	m_dt()
{
	std::cout << "Engine Started\n";
	
	//add players here
	

	init();
	load();

	
};


Engine::~Engine() {

};


void Engine::update() {
	handleEvents();
	handleInput();
	handleCollisions();
};


void Engine::draw(sf::Sprite &sprite) {



	//draw background
	sf::Sprite background(m_texture);
	m_background = background;

	
	m_window.draw(m_background);
	std::cout << "background texture good\n";

	m_window.draw(sprite);
	m_window.display();

};





/// <summary>
/// /////////////GAME LOOP////////////GAME LOOP////////////////GAME LOOP/////////////////////GAME LOOP/////////////////////GAME LOOP/////////////////////GAME LOOP//////////////////
/// </summary>

void Engine::run() {
	
	sf::Clock clock;
	sf::Time time = clock.restart();
	float dt = time.asSeconds();
	sf::Vector2f mouseWorldPosition;
	sf::Vector2i mouseScreenPosition;
	mouseScreenPosition = sf::Mouse::getPosition(m_window);
	sf::Texture texture;


	/*
	
		setting texture for player
	*/
	//sf::Texture texture = TextureHolder::getTexture("../graphics/player.png");
	if (!texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/player1.png")) { // Replace with your texture file
		// Handle texture loading error
		std::cout << "player texture not loaded\n";
		texture = TextureHolder::getTexture("../graphics/player.png");
	}
	else {
		std::cout << "player texture loaded from file\n";
	}


	/*
		INITIALIZING PLAYER FOR GAME LOOP
	*/
	Player player1(texture, m_window);
	player1.m_sprite.setTexture(texture);



	/*
		WINDOW LOOP
	*/



	while (m_window.isOpen()) {

		
		draw(player1.m_sprite);
		player1.move();


	}


	//m_window.clear();
	unload();

	close();



};




/// <summary>
/// initialize window and set up initial settings
/// </summary>
/// 
/// 
void Engine::init() {
	std::cout << "Engine initialized" << std::endl;
	m_window.create(m_vm, "boilerplate");
	m_window.setSize({ 800,600 });
	m_window.setFramerateLimit(60);
	m_window.setVerticalSyncEnabled(true);
	m_window.setKeyRepeatEnabled(true);
	m_window.setMouseCursorVisible(true);
	m_window.setMouseCursorGrabbed(false);
};

/// <summary>
/// loading in the texture for the background
/// </summary>
void Engine::load() {
	std::cout << "Engine loaded" << std::endl;
	
	if (!m_texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/background.png")) {
		std::cout << "Error loading texture" << std::endl;
	}
	else {
		std::cout << "background Texture loaded" << std::endl;
	}
	

	m_background.setTexture(m_texture);
	m_background.setPosition({ 0, 0 });
	m_background.setScale({ 1, 1 });
	m_background.setOrigin({0, 0});
	m_background.setRotation(sf::degrees(0));



};

	
void Engine::unload() {
	std::cout << "Engine unloaded" << std::endl;
};


//////////////////////////////////////SETUP FUNCTIONS//////////////////////SETUP FUNCTIONS/////////////////////////////////////////////////SETUP FUNCTIONS////////////////////////////






	
	
void Engine::close() {
	std::cout << "Engine closed" << std::endl;
	m_window.close();
};

	
	



///////////////////////////////HANDLERS///////////////////////HANDLERS/////////////////////////////HANDLERS/////////////////////////////////////////////HANDLERS//////////////////////
	
	
void Engine::handleEvents() {
	std::cout << "Engine handled events" << std::endl;
	while (const std::optional event = m_window.pollEvent()) {
		if (event->is<sf::Event::KeyPressed>()) {
			//player1.move();
		}
	}
};

	
	
void Engine::handleInput() {
	std::cout << "Engine handled input" << std::endl;
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Escape)) {
		m_window.close();
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::H)) {
		//PULL HUD UP AND DOWN
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::P)) {
		//SCREENSHOT
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Enter)) {
		//state = PAUSED || IF STATE==PAUSE THEN STATE = PLAYING
		if (state == State::GAMEOVER) {
			state = State::LEVELING_UP;
			std::cout << "leveling up\n";
		}
		if (state == State::PLAYING) {
			state = State::PAUSED;
			std::cout << "Paused\n";
		}
		if (state == State::PAUSED) {
			state = State::PLAYING;
			std::cout << "Playing\n";
		}
		if (state == State::LEVELING_UP) {
			state = State::PLAYING;
			std::cout << "Playing\n";
		}
	}

	
};

		
void Engine::handleCollisions() {
	std::cout << "Engine handled collisions" << std::endl;
	//if (m_circle.getGlobalBounds().intersects(m_background.getGlobalBounds())) {
	//	std::cout << "Collision detected" << std::endl;
	//};
};	

	
	
