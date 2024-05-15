#ifndef FLOOR_H
#define FLOOR_H
#include "tile.h"

class Floor : public Tile
{
private:

public:
    Floor(const int row, const int column);
    ~Floor();
    pair<bool, Tile*> onEnter(Character* who);

};

#endif // FLOOR_H
