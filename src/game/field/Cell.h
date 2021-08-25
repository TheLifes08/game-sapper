#ifndef GAME_SAPPER_SRC_GAME_FIELD_CELL_H
#define GAME_SAPPER_SRC_GAME_FIELD_CELL_H

#include <cstddef>


struct Cell {
    size_t nearbyMinesNumber;
    bool isMine;
    bool isChecked;
    bool isMarked;
};


#endif // GAME_SAPPER_SRC_GAME_FIELD_CELL_H
