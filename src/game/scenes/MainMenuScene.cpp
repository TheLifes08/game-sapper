#include "MainMenuScene.h"
#include "GameScene.h"
#include "../Game.h"
#include "../audio/MusicManager.h"
#include "../textures/TextureManager.h"
#include "../gui/FontManager.h"

Game::Scenes::MainMenuScene::MainMenuScene(Game& game): Scene(game),
m_newGameButton(sf::FloatRect(185, 200, 200, 25)),
m_exitButton(sf::FloatRect(185, 250, 200, 25)) {
    m_newGameButton.setFont(Gui::FontManager::getInstance().getFont("arial"));
    m_exitButton.setFont(Gui::FontManager::getInstance().getFont("arial"));
    m_newGameButton.setFillColor(sf::Color::White);
    m_exitButton.setFillColor(sf::Color::White);
    m_newGameButton.setString("NEW GAME");
    m_exitButton.setString("EXIT");
    Audio::MusicManager::getInstance().playMusic("resources/music/main-menu-theme.ogg");
}

void Game::Scenes::MainMenuScene::onEvent(const sf::Event &event) {
    if (event.type == sf::Event::MouseButtonPressed) {
        if (event.mouseButton.button == sf::Mouse::Left) {
            if (m_newGameButton.isInButtonRect(event.mouseButton.x, event.mouseButton.y)) {
                m_game.changeScene(std::make_unique<GameScene>(m_game, 16, 16, 10));
            } else if (m_exitButton.isInButtonRect(event.mouseButton.x, event.mouseButton.y)) {
                m_game.getWindow().close();
            }
        }
    }
}

void Game::Scenes::MainMenuScene::onUpdate(const sf::Time& elapsedTime) {
    sf::RenderWindow& window = m_game.getWindow();
    sf::Texture& menuBackgroundTexture = Textures::TextureManager::getInstance().getTexture("main-menu");
    sf::Sprite sprite(menuBackgroundTexture);
    sprite.setTextureRect(sf::IntRect(0, 0, 800, 800));

    window.draw(sprite);
    window.draw(m_newGameButton);
    window.draw(m_exitButton);
}

