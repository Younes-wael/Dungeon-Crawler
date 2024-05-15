#include "floor.h"

Floor::Floor(const int row, const int column) : Tile(".",row,column)
{
}

Floor::~Floor(){

}

pair<bool, Tile*> Floor::onEnter(Character* who){
    return make_pair<bool, Tile*>(true,nullptr);
}
