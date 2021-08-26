#include "TextureManager.h"

Game::Textures::TextureManager& Game::Textures::TextureManager::getInstance() {
    static TextureManager textureManager;
    return textureManager;
}

bool Game::Textures::TextureManager::loadTexture(const std::string& path, const std::string &name) {
    sf::Texture texture;

    if (name.empty() || !texture.loadFromFile(path)) {
        return false;
    }

    m_textures[name] = texture;

    return true;
}

sf::Texture& Game::Textures::TextureManager::getTexture(const std::string &name) {
    if (m_textures.count(name) == 0) {
        throw std::invalid_argument("Wrong texture name.");
    }

    return m_textures[name];
}
