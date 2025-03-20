#ifndef HTTPSERVER_H
#define HTTPSERVER_H

#include <QTcpServer>
#include <QHostAddress>
#include "Router.h"
#include "HttpConnection.h"
#include <QDebug>


class HTTPServer : public QTcpServer
{
    Q_OBJECT
public:
    explicit HTTPServer(Router *router, QObject *parent = nullptr);
    bool startListening(const QHostAddress &address = QHostAddress::Any, quint16 port = 8080);

protected:
    void incomingConnection(qintptr socketDescriptor) override;

private:
    Router *m_router;
};

#endif // HTTPSERVER_H
