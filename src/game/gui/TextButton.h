#ifndef GAME_SAPPER_SRC_GAME_GUI_TEXT_BUTTON_H
#define GAME_SAPPER_SRC_GAME_GUI_TEXT_BUTTON_H

#include <SFML/Graphics.hpp>

class TextButton : public sf::Text {
public:
    explicit TextButton(const sf::FloatRect& rect);
    bool isInButtonRect(float x, float y);

private:
    sf::FloatRect m_rect;
};


#endif // GAME_SAPPER_SRC_GAME_GUI_TEXT_BUTTON_H
