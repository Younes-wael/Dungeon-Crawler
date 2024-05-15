#ifndef PORTAL_H
#define PORTAL_H
#include "tile.h"


class Portal : public Tile
{
private:
    Portal* destination;
    const int row,column;
public:
    Portal(const int row, const int column);
    ~Portal();
    pair<bool, Tile*> onEnter(Character* who);
    Portal *getDestination() const;
    void setDestination(Portal *newDestination);

    int getRow() const;
    int getColumn() const;
};

#endif // PORTAL_H
