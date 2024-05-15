#ifndef TILE_H
#define TILE_H
#include "character.h"
//#include "portal.h"
#include <iostream>
using namespace std;

class Character;

class Tile
{
    friend class Level; //to be able to delete elements of the Board (protected)
private:
    string texture;
    Character* character;
    const int row;
    const int column;
public:
    string getTexture() ;
    bool hasCharacter();
    bool moveTo(Tile* destTile, Character* who);
    bool onLeave(Tile* destTile, Character* who);
    virtual pair<bool, Tile*> onEnter(Character* who)=0;

    void setCharacter(Character *newCharacter);
    int getRow() const;
    int getColumn() const;


    Character *getCharacter() const;

protected:
    Tile(string texture, const int row, const int column);
    virtual ~Tile();

};

#endif // TILE_H
