#include "sender.h"
#include <QDebug>

Sender::Sender(QObject *parent) :
    QObject(parent)
{

}

void Sender::send(int buttons)
{
    _socket.writeDatagram(QByteArray::number(buttons),QHostAddress::LocalHost,545454);
}
