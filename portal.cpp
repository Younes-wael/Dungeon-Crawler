#include "portal.h"

Portal *Portal::getDestination() const
{
    return destination;
}

void Portal::setDestination(Portal *newDestination)
{
    destination = newDestination;
}

int Portal::getRow() const
{
    return row;
}

int Portal::getColumn() const
{
    return column;
}

Portal::Portal(const int row, const int column) : Tile("O",row,column) , row(row), column(column)
{

}
Portal::~Portal(){

}

pair<bool, Tile*> Portal::onEnter(Character* who){
    return make_pair<bool, Tile*>(true,destination);
}
