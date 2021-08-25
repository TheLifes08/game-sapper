#ifndef GAME_SAPPER_SRC_GAME_SCENES_GAME_SCENE_H
#define GAME_SAPPER_SRC_GAME_SCENES_GAME_SCENE_H

#include "Scene.h"
#include "../field/Field.h"
#include "../field/FieldStatus.h"


namespace Game {
    namespace Scenes {
        class GameScene final : public Scene {
        public:
            GameScene(sf::RenderWindow& window, size_t sizeX, size_t sizeY, size_t minesNumber);
            void onCreate() override;
            void onEvent(const sf::Event& event) override;
            void onUpdate() override;
            ~GameScene() override = default;

        private:
            void generateMines(size_t minesNumber);
            void calculateNearbyMinesCount();
            void checkCell(size_t x, size_t y);
            Field::FieldStatus getFieldStatus();

            Field::Field m_field;
            size_t m_minesNumber;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_SCENES_GAME_SCENE_H
