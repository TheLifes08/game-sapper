#ifndef GAME_SAPPER_SRC_GAME_GAME_H
#define GAME_SAPPER_SRC_GAME_GAME_H

#include "scenes/Scene.h"

#include <SFML/Graphics.hpp>
#include <memory>


namespace Game {
    class Game {
    public:
        Game();
        Game(const Game&) = delete;
        Game(Game&&) = delete;
        Game& operator=(const Game&) = delete;
        Game& operator=(Game&&) = delete;
        ~Game() = default;

        void onCreate();
        void onEvent(const sf::Event& event);
        void onUpdate();
        int execute();

    private:
        sf::RenderWindow m_window;
        std::unique_ptr<Scenes::Scene> m_scene;
    };
}


#endif // GAME_SAPPER_SRC_GAME_GAME_H
