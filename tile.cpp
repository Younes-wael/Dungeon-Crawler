#include "tile.h"




Tile::Tile(string texture, const int row, const int column): texture(texture), character(nullptr),
    row(row), column(column)
{
}


Tile::~Tile(){

}

Character *Tile::getCharacter() const
{
    return character;
}

string Tile::getTexture()
{
    if(this->hasCharacter())
        return character->getTexture();
    return texture;
}

bool Tile::hasCharacter(){
    if(character==nullptr)
        return false;
    return true;
}

bool Tile::moveTo(Tile* destTile, Character* who){
    if(destTile->getTexture() != "#" && destTile!=nullptr){
        who->setTile(destTile);
        this->setCharacter(nullptr);
        destTile->setCharacter(who);
        return true;
    }
    return false;
}

bool Tile::onLeave(Tile *destTile, Character *who)
{
    return true;
}



void Tile::setCharacter(Character *newCharacter)
{
    character = newCharacter;
}


int Tile::getRow() const
{
    return row;
}

int Tile::getColumn() const
{
    return column;
}

