cmake_minimum_required(VERSION 3.20)
project(game_sapper)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics audio REQUIRED)
find_package(GTest REQUIRED)

add_executable(game_sapper src/main.cpp src/game/Game.cpp src/game/Game.h src/game/scenes/Scene.h src/game/scenes/MainMenuScene.cpp src/game/scenes/MainMenuScene.h src/game/scenes/GameScene.cpp src/game/scenes/GameScene.h src/game/field/Field.cpp src/game/field/Field.h src/game/field/Cell.h src/game/field/FieldStatus.h src/game/audio/MusicManager.cpp src/game/audio/MusicManager.h src/game/textures/TextureManager.cpp src/game/textures/TextureManager.h src/game/gui/TextButton.cpp src/game/gui/TextButton.h src/game/gui/FontManager.cpp src/game/gui/FontManager.h)
target_link_libraries(game_sapper sfml-graphics sfml-audio)

file(COPY "resources" DESTINATION "./")