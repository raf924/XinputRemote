#include "widget.h"
#include <QApplication>
#include "sender.h"
#include "xboxcontroller.h"
#include <QDebug>
#include <synchapi.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();

    CXBOXController * gamepad = new CXBOXController(1);
    Sender * sender = new Sender;
    bool end = true;
    while(end){
        WORD buttons = 0;
        ZeroMemory(&buttons,sizeof(WORD));
        buttons = gamepad->GetState().Gamepad.wButtons;
        sender->send(buttons);
        Sleep(1);
    }

    return a.exec();
}
