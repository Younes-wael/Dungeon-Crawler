#ifndef WALL_H
#define WALL_H
#include "tile.h"


class Wall: public Tile
{
public:
    Wall(const int row, const int column);
    ~Wall();
    pair<bool, Tile*> onEnter(Character* who);
};

#endif // WALL_H
