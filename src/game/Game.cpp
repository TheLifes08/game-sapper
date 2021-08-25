#include "Game.h"
#include "scenes/GameScene.h"

Game::Game::Game() {
    const std::string title = "Sapper Game";
    const sf::VideoMode videoMode(600, 600);
    const sf::Uint32 windowStyle = sf::Style::Close;
    m_scene = std::make_unique<Scenes::GameScene>(m_window, 10, 10, 5);

    m_window.create(videoMode, title, windowStyle);
    onCreate();
}

void Game::Game::onCreate() {
    if (m_scene != nullptr) {
        m_scene->onCreate();
    }
}

void Game::Game::onEvent(const sf::Event& event) {
    if (m_scene != nullptr) {
        m_scene->onEvent(event);
    }
}

void Game::Game::onUpdate() {
    if (m_scene != nullptr) {
        m_scene->onUpdate();
    }
}

int Game::Game::execute() {
    while (m_window.isOpen()) {
        sf::Event event;

        while (m_window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                m_window.close();
                return 0;
            } else {
                onEvent(event);
            }
        }

        m_window.clear();
        onUpdate();
        m_window.display();
    }

    return 0;
}
