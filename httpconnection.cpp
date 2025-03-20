#include "httpconnection.h"




HttpConnection::HttpConnection(qintptr socketDescriptor, Router *router, QObject *parent): QObject(parent), m_router(router)
{
    m_socket = new QTcpSocket(this);
    if (!m_socket->setSocketDescriptor(socketDescriptor)) {
        m_socket->deleteLater();
        return;
    }
    connect(m_socket, &QTcpSocket::readyRead, this, &HttpConnection::ReadyRead);
    connect(m_socket, &QTcpSocket::disconnected, this, &HttpConnection::deleteLater);
}

void HttpConnection::ReadyRead()
{
    QByteArray data = m_socket->readAll();

    HttpParser parser;
    HttpRequest request = parser.parse(data);


    static_cast<void>(QtConcurrent::run([this, request]() {
        HttpResponse response = m_router->dispatch(request);
        QMetaObject::invokeMethod(this, [this, response]() {
            m_socket->write(response.toByteArray());
            m_socket->flush();
            m_socket->disconnectFromHost();
        }, Qt::QueuedConnection);
    }));

}
