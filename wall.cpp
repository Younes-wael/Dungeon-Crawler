#include "wall.h"

Wall::Wall(const int row, const int column) : Tile("#",row,column)
{

}

Wall::~Wall(){

}
pair<bool, Tile*> Wall::onEnter(Character* who){
    return make_pair<bool, Tile*>(false,nullptr);
}
