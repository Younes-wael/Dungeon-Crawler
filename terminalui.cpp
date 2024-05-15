#include "terminalui.h"

TerminalUI::TerminalUI()
{

}

void TerminalUI::draw(Level* level){
    for (int i = 0; i < level->getHeight(); ++i) {
        for (int j = 0; j < level->getWidth(); ++j) {
            cout<<level->getTile(i,j)->getTexture();
        }
        cout<<endl;
    }

}


Input TerminalUI::move(){
    Input input;
    char inputTemp;
    cout<<"In welche Richtung möchten Sie laufen?"<<endl;
    cout<<"Nach oben (w)"<<endl;
    cout<<"Nach unten (s)"<<endl;
    cout<<"Nach rechts (d)"<<endl;
    cout<<"Nach links (a)"<<endl;
    cout<<"Verlassen (e)"<<endl;
    cout<<"Eingabe: ";
    cin>>inputTemp;

    if(inputTemp == 'e' || inputTemp == 'E'){
        input.exit = true;
        input.horizontalMovement = 0;
        input.vertikalMovement = 0;
    }
    else if(inputTemp == 'w' || inputTemp == 'W'){
        input.exit = false;
        input.horizontalMovement = -1;
        input.vertikalMovement = 0;
    }
    else if(inputTemp == 's' || inputTemp == 'S'){
        input.exit = false;
        input.horizontalMovement = 1;
        input.vertikalMovement = 0;
    }
    else if(inputTemp == 'd' || inputTemp == 'D'){
        input.exit = false;
        input.horizontalMovement = 0;
        input.vertikalMovement = 1;
    }
    else if(inputTemp == 'a' || inputTemp == 'A'){
        input.exit = false;
        input.horizontalMovement = 0;
        input.vertikalMovement = -1;
    }
    return input;
}
