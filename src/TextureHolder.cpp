#include "../headers/TextureHolder.h"



TextureHolder* TextureHolder::m_s_Instance = nullptr;

TextureHolder::TextureHolder() {
	assert(m_s_Instance == nullptr);
	m_s_Instance = this;
};
sf::Texture& TextureHolder::getTexture(std::string const& filename) {
	//get a reference to m_textures
	auto& m = m_s_Instance->m_Textures;
	//auto is equivalent to map<string, texture>::iterator
	

	//create a key value pair iterator
	auto keyValuePair = m.find(filename);

	//match?
	if (keyValuePair != m.end()) {
		return keyValuePair->second;
	}
	else {
		//filename not found
		auto& texture = m[filename];
		//load the texture
		texture.loadFromFile(filename);

		return texture;
	}
};

