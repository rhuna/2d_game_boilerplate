#pragma once
#ifndef TEXTUREHOLDER_H
#define TEXTUREHOLDER_H

#include <SFML/Graphics.hpp>
#include <map>



class TextureHolder {
public:
	TextureHolder();
	static sf::Texture& getTexture(std::string const& filename);
	

private:

	//a map container <string, Texture>
	std::map<std::string, sf::Texture> m_Textures;

	//a pointer to the class
	static TextureHolder* m_s_Instance;



};

#endif // !TEXTUREHOLDER_H


