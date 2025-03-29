#include <iostream>

#include "SFML/Graphics.hpp"
#include "../headers/Engine.h"
#include "../headers/player.h"
#include "../headers/TextureHolder.h"





int main() {


	sf::VideoMode vm({800,600}, 32);
	vm.bitsPerPixel = 32;
	
	Engine engine(vm);
	engine.run();

	

	return 0;
}