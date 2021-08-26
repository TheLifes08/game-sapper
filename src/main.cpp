#include "game/Game.h"
#include "game/textures/TextureManager.h"
#include "game/gui/FontManager.h"
#include <iostream>

int main() {
    Game::Textures::TextureManager& textureManager = Game::Textures::TextureManager::getInstance();
    Game::Gui::FontManager& fontManager = Game::Gui::FontManager::getInstance();

    try {
        textureManager.loadTexture("resources/images/main-menu.jpg", "main-menu");
        fontManager.loadFont("resources/fonts/arial.ttf", "arial");
    } catch (const std::invalid_argument& e) {
        std::cerr << e.what() << "\n";
        return 0;
    }

    Game::Game game;

    return game.execute();
}
