#ifndef GAME_SAPPER_SRC_GAME_TEXTURES_TEXTURE_MANAGER_H
#define GAME_SAPPER_SRC_GAME_TEXTURES_TEXTURE_MANAGER_H

#include <SFML/Graphics.hpp>
#include <map>


namespace Game {
    namespace Textures {
        class TextureManager {
        public:
            TextureManager(const TextureManager&) = delete;
            TextureManager(TextureManager&&) = delete;
            TextureManager& operator=(const TextureManager&) = delete;
            TextureManager& operator=(TextureManager&&) = delete;

            static TextureManager& getInstance();
            bool loadTexture(const std::string& path, const std::string& name);
            sf::Texture& getTexture(const std::string& name);

        private:
            TextureManager() = default;

            std::map<std::string, sf::Texture> m_textures;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_TEXTURES_TEXTURE_MANAGER_H
