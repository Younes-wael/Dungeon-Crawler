#include <iostream>
#include "dungeoncrawler.h"
#include "terminalui.h"
#include "level.h"
#include "character.h"

using namespace std;

int main()
{
    TerminalUI* terminal = new TerminalUI();
    Level* level = new Level(8,8);
    DungeonCrawler game(terminal, level);
    Character* character1= new Character("X");
    level->placeCharacter(character1,5,7);
    bool run=true;
    while (run) {
         run= game.turn();

    }


    return 0;
}
