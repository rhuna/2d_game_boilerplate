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


void Engine::update(sf::RenderWindow& window) {
	handleEvents();
	handleInput();
	handleCollisions();
};


void Engine::draw(sf::Clock dt) {
	
	sf::Time DT = dt.restart();
	sf::Vector2f mouseWorldPosition;
	sf::Vector2i mouseScreenPosition;
	mouseScreenPosition = sf::Mouse::getPosition(m_window);
	//draw background
	sf::Sprite background(m_texture);
	m_background = background;

	sf::Texture playertexture;
	//texture = TextureHolder::getTexture("../graphics/player.png");
	if (!playertexture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/player.png")) { // Replace with your texture file
		// Handle texture loading error
		std::cout << "player texture not loaded\n";
	}
	else {
		std::cout << "player texture loaded from file\n";
		playertexture = TextureHolder::getTexture("graphics/player.png");
	}
	Player player1(playertexture);
	player1.m_sprite.setTexture(playertexture);
	float seconds = DT.asSeconds();

	player1.move();
	player1.update(seconds, mouseScreenPosition);

	
	//draw and display defined window
	m_window.clear();
	m_window.draw(m_background);
	player1.draw(m_window);
	std::cout << "background texture good\n";
	m_window.display();
};





/// <summary>
/// /////////////GAME LOOP////////////GAME LOOP////////////////GAME LOOP/////////////////////GAME LOOP/////////////////////GAME LOOP/////////////////////GAME LOOP//////////////////
/// </summary>

void Engine::run() {
	sf::Clock clock;
	while (m_window.isOpen()) {
	
			draw(clock);
			update(m_window);
	



		
		
		
	}
	unload();
	close();
};



/// <summary>
/// initialize window and set up initial settings
/// </summary>
void Engine::init() {
	std::cout << "Engine initialized" << std::endl;
	m_window.create(m_vm, "boilerplate");
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

	//m_texture = TextureHolder::getTexture("../graphics/background.png");
	//m_texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/background.png");
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


	
	//m_background.setColor(sf::Color(255, 255, 255, 255));
    //m_background.setTextureRect(sf::IntRect(0, 0, 800, 600));
};

	
void Engine::unload() {
	std::cout << "Engine unloaded" << std::endl;
	//m_window.close();
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

	
	
