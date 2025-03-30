#include "../headers/Engine.h"
#include "../headers/enemy.h"




Engine::Engine(sf::VideoMode vm1) :
	m_resolution(sf::Vector2f({ 1250,1250 })),
	m_vm(vm1),
	m_window(m_vm, "boilerplate"),
	m_background(m_texture),
	m_sound(m_sound),
	m_dt()
{
	std::cout << "Engine Started\n";
	
	

	init();
	load();

	
};


Engine::~Engine() {

};


void Engine::update() {
	//handleEvents();
	//handleInput();
	//handleCollisions();
};


void Engine::draw(sf::Sprite &sprite1, const sf::Sprite &sprite2) {

	

	//draw background
	sf::Sprite background(m_texture);
	m_background = background;

	
	m_window.draw(m_background);
	std::cout << "background texture good\n";

	m_window.draw(sprite1);
	//not drawing sprite 2 now
	m_window.draw(sprite2);

	m_window.display();

};






/// /////////////GAME LOOP////////////GAME LOOP////////////////GAME LOOP/////////////////////GAME LOOP/////////////////////GAME LOOP/////////////////////GAME LOOP//////////////////


void Engine::run() {
	
	/*
		THIS CAN BE USED FOR CONTINUOUS PLAYER MOVEMENT
	*/
	sf::Clock clock;
	sf::Time time = clock.restart();
	float dt = time.asSeconds();
	//sf::Vector2f mouseWorldPosition;
	sf::Vector2i mouseScreenPosition;
	mouseScreenPosition = sf::Mouse::getPosition(m_window);


	/*
	
		setting texture for player
	*/
	sf::Texture texture;

	//loading texture
	if (!texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/player1.png")) { // Replace with your texture file
		// Handle texture loading error
		std::cout << "player texture not loaded\n";
		//using texture holder if for some reason the load from file isnt used.
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
	Enemy enemy1(texture, m_window);
	//enemy1.getSprite().setTexture(texture);


	/*
		WINDOW LOOP
	*/
	while (m_window.isOpen()) {

		//not really sure why to clear, but I've seen several instances where
		// people clear window before drawing and displaying.
		m_window.clear();
		

		//draws background and player
		draw(player1.m_sprite, enemy1.getSprite());
		
		//movement needs to happen while window is open
		player1.move();

		enemy1.moveToward(player1);

		//should update enemy position according to player position
		enemy1.update(dt,player1);

		

		//this update can be used for continuous movment. uncomment the clock at the top
		// and any other time related parameters
		//player1.update(dt, mouseScreenPosition);

	}

	//unloading engine stuffs
	unload();


	//automatically closes window when window loop is exited
	close();



};




/*
	USE THIS TO INITIALIZE WINDOW; WILL USE FOR OTHER INITIAL INITIALIZATIONS
*/
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

/*
	WILL USE FOR LOADING BACKGROUND FOR NOW. ULTIMATELY FOR LOADING ENGINE RELATED INITIATION
	DURING GAME LOOP
*/
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

/*
	FOR UNLOADING ENGINE RELATED ITEMS. LIKE FREEING MEMORY AND SUCH
*/
void Engine::unload() {
	std::cout << "Engine unloaded" << std::endl;
};


//////////////////////////////////////SETUP FUNCTIONS//////////////////////SETUP FUNCTIONS/////////////////////////////////////////////////SETUP FUNCTIONS////////////////////////////






	
/*
	FOR THE OPTION TO CLOSE THE WINDOW FOR ANY REASON
*/
void Engine::close() {
	std::cout << "Engine closed" << std::endl;
	m_window.close();
};

	
	



///////////////////////////////HANDLERS///////////////////////HANDLERS/////////////////////////////HANDLERS/////////////////////////////////////////////HANDLERS//////////////////////
	


/*
	HANDLING EVENTS HAVING TO DO WITH MAIN APPLICATION(ENGINE)
	WILL USE FOR MOUSE EVENTS, HOT KEYS, HUD, ETC...
*/
void Engine::handleEvents() {
	std::cout << "Engine handled events" << std::endl;
	while (const std::optional event = m_window.pollEvent()) {
		if (event->is<sf::Event::KeyPressed>()) {
			if (event->getIf<sf::Event::KeyPressed>()->code == sf::Keyboard::Key::Escape) {
				m_window.close();
			}
		}
	}
};

	
/*
	MAY USE MAY NOT, WILL NEED TO UTILIZE WITHIN HANDLE EVENTS MAYBE?? IDK YET
*/
void Engine::handleInput() {
	std::cout << "Engine handled input" << std::endl;

	
};

/*
	MAY USE FOR COLLISIONS OUTSIDE OF PLAYER BUT ULTIMATELY COLLISIONS WITH PLAYER WILL
	BE HANDLED IN PLAYER CLASS
*/
void Engine::handleCollisions() {
	std::cout << "Engine handled collisions" << std::endl;
	//	std::cout << "Collision detected" << std::endl;
	
};	

	
	
