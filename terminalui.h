#ifndef TERMINALUI_H
#define TERMINALUI_H
#include "abstractui.h"
#include "level.h"

class  Level;
class TerminalUI : public AbstractUI
{
public:
    TerminalUI();
    void draw(Level* level);
    Input move();
};

#endif // TERMINALUI_H
