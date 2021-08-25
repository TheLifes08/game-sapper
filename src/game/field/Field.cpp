#include "Field.h"
#include <stdexcept>

Game::Field::Field::Field(size_t sizeX, size_t sizeY) {
    m_fieldRows.resize(sizeY, FieldRow(sizeX));
    this->sizeX = sizeX;
    this->sizeY = sizeY;
}

Cell& Game::Field::Field::get(size_t x, size_t y) {
    if (y >= m_fieldRows.size() || x >= m_fieldRows[y].cells.size()) {
        throw std::invalid_argument("Out of bounds.");
    }

    return m_fieldRows[y].cells[x];
}

size_t Game::Field::Field::getSizeX() {
    return sizeX;
}

size_t Game::Field::Field::getSizeY() {
    return sizeY;
}

Game::Field::Field::FieldRow::FieldRow(size_t length) {
    cells.resize(length);
}
