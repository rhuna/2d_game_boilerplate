#include <iostream>

#include "SFML/Graphics.hpp"





int main() {

	//sf::Vector2f resolution(800, 600);

	sf::VideoMode vm({800,600}, 32);
	vm.bitsPerPixel = 32;
	
	sf::RenderWindow window(vm, "boilerplate");

	sf::Texture texture;
	sf::Sprite background();
	if (!texture.loadFromFile("graphics/background.png")) {
		std::cout << "Error loading texture" << std::endl;
		return 1;
	}
	else {
		std::cout << "Texture loaded" << std::endl;
	}
	while (window.isOpen()) {
		sf::Sprite background(texture);
		sf::CircleShape circle(100);
	
		circle.setFillColor(sf::Color::Green);

		
		window.clear();
		window.draw(background);
		window.draw(circle);
		window.display();
	}

	return 0;
}