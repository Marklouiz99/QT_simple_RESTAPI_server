#ifndef HTTPCONNECTION_H
#define HTTPCONNECTION_H

#include <QObject>
#include <QTcpSocket>
#include "HttpRequest.h"
#include "HttpResponse.h"
#include "HttpConnection.h"
#include "HttpParser.h"
#include "Router.h"

#include <QTcpSocket>
#include <QtConcurrent>
#include <QMetaObject>
#include <QDebug>

class HttpConnection : public QObject
{
    Q_OBJECT
public:
    explicit HttpConnection(qintptr socketDescriptor, Router *router, QObject *parent = nullptr);

signals:

private slots:
    void ReadyRead();

private:
    QTcpSocket *m_socket;
    Router *m_router;
};

#endif // HTTPCONNECTION_H
