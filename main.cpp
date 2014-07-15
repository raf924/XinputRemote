#include "widget.h"
#include <QApplication>
#include "xboxcontroller.h"
#include <QDebug>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //w.show();

    CXBOXController * gamepad = new CXBOXController(1);
    bool end = true;
    while(end){
        WORD buttons = gamepad->GetState().Gamepad.wButtons;
        if(buttons!=0){
            if(buttons & XINPUT_GAMEPAD_BACK){
                qDebug()<<"BACK";
                return 0;
            }
        }
    }

    return a.exec();
}
