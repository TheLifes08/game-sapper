#ifndef GAME_SAPPER_SRC_GAME_SCENES_MAIN_MENU_SCENE_H
#define GAME_SAPPER_SRC_GAME_SCENES_MAIN_MENU_SCENE_H

#include "Scene.h"


namespace Game {
    namespace Scenes {
        class MainMenuScene final : public Scene {
        public:
            MainMenuScene(sf::RenderWindow& window);
            void onCreate() override;
            void onEvent(const sf::Event& event) override;
            void onUpdate() override;
            ~MainMenuScene() override = default;

        private:
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_SCENES_MAIN_MENU_SCENE_H
