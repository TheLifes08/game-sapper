#ifndef GAME_SAPPER_SRC_GAME_SCENES_SCENE_H
#define GAME_SAPPER_SRC_GAME_SCENES_SCENE_H

#include <SFML/Graphics.hpp>


namespace Game {
    namespace Scenes {
        class Scene {
        public:
            Scene(sf::RenderWindow& window): m_window(window) {}
            virtual void onCreate() = 0;
            virtual void onEvent(const sf::Event& event) = 0;
            virtual void onUpdate() = 0;
            virtual ~Scene() = default;

        protected:
            sf::RenderWindow& m_window;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_SCENES_SCENE_H
