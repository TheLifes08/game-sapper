#ifndef GAME_SAPPER_SRC_GAME_GUI_FONT_MANAGER_H
#define GAME_SAPPER_SRC_GAME_GUI_FONT_MANAGER_H

#include <SFML/Graphics.hpp>
#include <map>


namespace Game {
    namespace Gui {
        class FontManager {
        public:
            FontManager(const FontManager&) = delete;
            FontManager(FontManager&&) = delete;
            FontManager& operator=(const FontManager&) = delete;
            FontManager& operator=(FontManager&&) = delete;

            static FontManager& getInstance();
            bool loadFont(const std::string& path, const std::string& name);
            sf::Font& getFont(const std::string& name);

        private:
            FontManager() = default;

            std::map<std::string, sf::Font> m_fonts;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_GUI_FONT_MANAGER_H
