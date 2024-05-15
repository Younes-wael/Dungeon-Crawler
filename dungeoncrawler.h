#ifndef DUNGEONCRAWLER_H
#define DUNGEONCRAWLER_H
#include "level.h"
#include "terminalui.h"

class DungeonCrawler
{
private:
    TerminalUI* terminalUI;
    Level* level;
public:
    DungeonCrawler(TerminalUI *terminalUI, Level *level);
    ~DungeonCrawler();
    bool turn();
};

#endif // DUNGEONCRAWLER_H
