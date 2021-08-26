#ifndef GAME_SAPPER_SRC_GAME_SCENES_MAIN_MENU_SCENE_H
#define GAME_SAPPER_SRC_GAME_SCENES_MAIN_MENU_SCENE_H

#include "Scene.h"
#include "../gui/TextButton.h"


namespace Game {
    namespace Scenes {
        class MainMenuScene final : public Scene {
        public:
            explicit MainMenuScene(Game& game);
            void onEvent(const sf::Event& event) override;
            void onUpdate(const sf::Time& elapsedTime) override;
            ~MainMenuScene() override = default;

        private:
            TextButton m_newGameButton;
            TextButton m_exitButton;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_SCENES_MAIN_MENU_SCENE_H
