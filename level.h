#ifndef LEVEL_H
#define LEVEL_H
#include "tile.h"
#include "floor.h"
#include "wall.h"
#include "portal.h"
#include <vector>

class Tile;
class Character;
class Floor;
class Wall;
class Portal;

class Level{
private:
    int width;
    int height;
    vector<vector<Tile*>> Board;
    Tile* tile;
    Character* character;
    Portal* portal1;
    Portal* portal2;

public:
    const std::string l = {
        "##########"
        "#O.......#"
        "#........#"
        "#........#"
        "#........#"
        "#........#"
        "##########"
        "#O.......#"
        "#........#"
        "##########"
    };
    Level(int Width, int Height);
    ~Level();
    Tile *getTile(int row, int col);
    const Tile *getTile(int row, int col) const;
    void placeCharacter(Character *c, int row, int col);


    int getWidth() const;
    int getHeight() const;
    vector<vector<Tile *> > getBoard() const;
    Portal *getPortal1() const;
    Portal *getPortal2() const;
};

#endif // LEVEL_H
