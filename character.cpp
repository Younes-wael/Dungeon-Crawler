#include "character.h"

string Character::getTexture() const
{
    return texture;
}

void Character::setTile(Tile *newTile)
{
    tile = newTile;
}

Tile *Character::getTile() const
{
    return tile;
}

Character::Character(string texture) : texture(texture), tile(nullptr)
{

}

Input Character:: move(){
    return UiElement->move();
}
