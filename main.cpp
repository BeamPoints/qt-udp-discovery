//#include <QCoreApplication>
//#include <QtNetwork/QUdpSocket>
//#include <QTextStream>
//#include <QString>
//#include "server.h"
//#include <QHostInfo>
#include <QDebug>
#include "mainstack.h"
#include <QApplication>
#include <QResource>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setFont(QFont("Arial", 14));
    a.setApplicationName("Jotto");
    bool retVal = QResource::registerResource("qresources.qrc");
//    qDebug() << "resources?" << retVal;
//    QTextStream cout(stdout);
//    QTextStream cin(stdin);

//    QList<QHostAddress> add = QHostInfo::fromName(QHostInfo::localHostName()).addresses();
//    foreach(QHostAddress a, add)
//    {
//        qDebug() << a.toString();
//    }

//    qDebug() << "This machines's IP address is:";
//    qDebug() << "Listen (L) or Broadcast (B)?";// << QTextStream::;
//    QString line = cin.readLine();  // This is how you read the entire line

//    QString word;
//    cin >> word;


    MainStack m;
    m.show();
//    Server * s = new Server;
//    while(getchar())
//    if(word.startsWith("l", Qt::CaseInsensitive))
//    {
//        s->listenForUdpBroadcast();
//    }
//    else
//    {
//        s->startTcpServer();
//        s->broadcastUdp();
//    }

    return a.exec();
}
