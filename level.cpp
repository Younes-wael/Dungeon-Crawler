#include "level.h"

int Level::getWidth() const
{
    return width;
}

int Level::getHeight() const
{
    return height;
}

vector<vector<Tile *> > Level::getBoard() const
{
    return Board;
}

Portal *Level::getPortal1() const
{
    return portal1;
}

Portal *Level::getPortal2() const
{
    return portal2;
}

Level::Level(int Width, int Height): width(10), height(10),tile(nullptr), character(nullptr),
    portal1(nullptr), portal2(nullptr)
{

    int amountOfPortal = 2;
    Board.resize(height, std::vector<Tile*>(width, nullptr));
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            int index = i * width + j;
            //Wall
            if(l.at(index) == '#'){
                Board.at(i).at(j) = new Wall(i, j);
            }
            //Floor
            else if(l.at(index) == '.'){
                Board.at(i).at(j) = new Floor(i, j);
            }
            //Portal
            else if(l.at(index) == 'O'){
                if(amountOfPortal == 2){
                    portal1 = new Portal( i, j);
                    Board.at(i).at(j) = portal1;
                    amountOfPortal--;
                }
                else{
                    portal2 = new Portal( i, j);
                    Board.at(i).at(j) = portal2;
                }
            }
        }
    }
    portal1->setDestination(portal2);
    portal2->setDestination(portal1);
}

Level::~Level(){
    for (int i = 0; i < height; ++i) {
        for (int j = 0; j < width; ++j) {
            delete Board[i][j];
        }
    }
}

Tile * Level::getTile(int row, int col){
    return Board[row][col];
}

const Tile * Level::getTile(int row, int col) const{
    return Board[row][col];
}

void Level::placeCharacter(Character *c, int row, int col){
    return Board[row][col]->setCharacter(c);
}




































