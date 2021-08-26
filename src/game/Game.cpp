#include "Game.h"
#include "scenes/MainMenuScene.h"
#include <iostream>

Game::Game::Game() {
    const std::string title = "Sapper Game";
    const sf::VideoMode videoMode(512, 512);
    const sf::Uint32 windowStyle = sf::Style::Close;

    m_window.create(videoMode, title, windowStyle);
    changeScene(std::make_unique<Scenes::MainMenuScene>(*this));
}

void Game::Game::onEvent(const sf::Event& event) {
    if (m_scene != nullptr) {
        m_scene->onEvent(event);
    }
}

void Game::Game::onUpdate(const sf::Time& elapsedTime) {
    if (m_scene != nullptr) {
        m_scene->onUpdate(elapsedTime);
    }
}

int Game::Game::execute() {
    sf::Clock clock;

    try {
        while (m_window.isOpen()) {
            sf::Event event {};

            while (m_window.pollEvent(event)) {
                if (event.type == sf::Event::Closed) {
                    m_window.close();
                    return 0;
                } else {
                    onEvent(event);
                }
            }

            m_window.clear();
            onUpdate(clock.getElapsedTime());
            m_window.display();

            if (m_replaceScene != nullptr) {
                replaceScene();
            }

            clock.restart();
        }
    } catch (const std::exception& e) {
        std::cerr << e.what() << "\n";
        return 1;
    } catch (...) {
        std::cerr << "Unknown error occurred!\n";
        return 1;
    }

    return 0;
}

sf::RenderWindow &Game::Game::getWindow() {
    return m_window;
}

void Game::Game::changeScene(std::unique_ptr<Scenes::Scene>&& scene) {
    m_replaceScene = std::move(scene);
}

void Game::Game::replaceScene() {
    m_scene = std::move(m_replaceScene);
    m_replaceScene.reset(nullptr);
}
