#ifndef GAME_SAPPER_SRC_GAME_FIELD_FIELD_H
#define GAME_SAPPER_SRC_GAME_FIELD_FIELD_H

#include "Cell.h"

#include <vector>


namespace Game {
    namespace Field {
        class Field final {
        public:
            Field(size_t sizeX, size_t sizeY);
            Cell& get(size_t x, size_t y);
            size_t getSizeX();
            size_t getSizeY();

        private:
            struct FieldRow {
                std::vector<Cell> cells;
                explicit FieldRow(size_t length);
            };

            std::vector<FieldRow> m_fieldRows;
            size_t sizeX;
            size_t sizeY;
        };
    }
}


#endif // GAME_SAPPER_SRC_GAME_FIELD_FIELD_H
