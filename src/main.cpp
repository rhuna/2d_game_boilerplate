#include <iostream>

#include "SFML/Graphics.hpp"
#include "../headers/Engine.h"




int main() {


	sf::VideoMode vm({800,600}, 32);
	vm.bitsPerPixel = 32;
	
	
	//if (!texture.loadFromFile("C:/dev/2d_game_boilerplate/graphics/background.png")) {
	//	std::cout << "Error loading texture" << std::endl;
	//	return 1;
	//}
	//else {
	//	std::cout << "Texture loaded" << std::endl;
	//}

	//create engine and window - input texture for background
	Engine engine(vm);
	engine.run();
	

	return 0;
}