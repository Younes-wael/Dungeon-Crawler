#ifndef CHARACTER_H
#define CHARACTER_H
#include <iostream>
#include "abstractui.h"

using namespace std;

class Tile;
class AbstractUI;

class Character
{
private:
    string texture;
    Tile* tile;
    AbstractUI* UiElement;
public:
    Character(string texture);
    Input move();
    string getTexture() const;
    void setTile(Tile *newTile);

    Tile *getTile() const;
};

#endif // CHARACTER_H
