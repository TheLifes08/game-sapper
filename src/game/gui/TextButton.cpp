#include "TextButton.h"
#include "FontManager.h"

TextButton::TextButton(const sf::FloatRect& rect): sf::Text() {
    m_rect = rect;
    setPosition(rect.left, rect.top);
    setCharacterSize(rect.height);
}

bool TextButton::isInButtonRect(float x, float y) {
    return m_rect.contains(x, y);
}
