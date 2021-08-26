#ifndef GAME_SAPPER_SRC_GAME_SCENES_SCENE_H
#define GAME_SAPPER_SRC_GAME_SCENES_SCENE_H

#include <SFML/Graphics.hpp>


namespace Game {
    class Game;

    namespace Scenes {
        class Scene {
        public:
            explicit Scene(Game& game): m_game(game) {}
            virtual void onEvent(const sf::Event& event) = 0;
            virtual void onUpdate(const sf::Time& elapsedTime) = 0;
            virtual ~Scene() = default;

        protected:
            Game& m_game;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_SCENES_SCENE_H
