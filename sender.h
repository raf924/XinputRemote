#ifndef SENDER_H
#define SENDER_H

#include <QObject>
#include <QUdpSocket>

class Sender : public QObject
{
    Q_OBJECT
public:
    explicit Sender(QObject *parent = 0);
private:
    QUdpSocket _socket;
signals:

public slots:
    void send(int buttons);

};

#endif // SENDER_H
