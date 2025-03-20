#include "httpserver.h"

HTTPServer::HTTPServer(Router *router, QObject *parent): QTcpServer(parent), m_router(router)
{

}

bool HTTPServer::startListening(const QHostAddress &address, quint16 port)
{
    if (!listen(address, port)) {
        qDebug() << "[HttpServer] Failed to start listening on port" << port
                 << "Error:" << errorString();
        return false;
    }
    qDebug() << "[HttpServer] Listening on" << serverAddress().toString()
             << "port" << serverPort();
    return true;
}

void HTTPServer::incomingConnection(qintptr socketDescriptor)
{
    new HttpConnection(socketDescriptor, m_router, this);
}
