#ifndef ABSTRACTUI_H
#define ABSTRACTUI_H

struct Input {
    int horizontalMovement;
    int vertikalMovement;
    bool exit = false;
};

class Level;

class AbstractUI
{
public:
    AbstractUI();
    virtual void draw(Level* level)=0;
    virtual Input move()=0;


};

#endif // ABSTRACTUI_H
