#include "dungeoncrawler.h"

DungeonCrawler::DungeonCrawler(TerminalUI *terminalUI, Level *level):
    terminalUI(terminalUI), level(level)
{

}

DungeonCrawler::~DungeonCrawler(){

}

bool DungeonCrawler::turn(){
    for(int i=0;i<level->getHeight();i++){
        for (int j = 0; j < level->getWidth(); ++j) {
            Tile* currentTile = level->getTile(i, j);
            if(level->getTile(i,j)->hasCharacter()){
                    terminalUI->draw(level);
                    Input movement=terminalUI->move();
                    if(movement.exit)
                        return false;
                    // Perform the move on the current tile
                    int newRow = i + movement.horizontalMovement;
                    int newCol = j + movement.vertikalMovement;

                    // Check if the new position is within the bounds of the level
                    if (newRow >= 0 && newRow < level->getHeight() && newCol >= 0 && newCol < level->getWidth()) {
                        Tile* destinationTile = level->getTile(newRow, newCol);
                        if(level->getPortal1()->getRow()==newRow && level->getPortal1()->getColumn()== newCol)
                            destinationTile= level->getPortal1()->getDestination();
                        else if(level->getPortal2()->getRow()==newRow && level->getPortal2()->getColumn()== newCol)
                            destinationTile= level->getPortal2()->getDestination();

                        currentTile->moveTo(destinationTile, currentTile->getCharacter());

                    }


            };
        }
    }
    return true;

}
