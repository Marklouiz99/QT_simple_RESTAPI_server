#include <QCoreApplication>
#include "HttpServer.h"
#include "Router.h"
#include "crudhandler.h"
#include <QHostAddress>
#include <QDebug>
#include <QSharedPointer>

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);


    Router router;

    // Create a CRUDHandler as a shared pointer.
    QSharedPointer<CRUDHandler> crudHandler = QSharedPointer<CRUDHandler>::create();

    // Register the handler for the "/crud" endpoint.
    router.addRoute("/crud", crudHandler);

    // Create and start the HTTP server with the router.
    HTTPServer server(&router);
    if (!server.startListening(QHostAddress::Any, 8080)) {
        qDebug() << "Failed to start server!";
        return 1;
    }

    return app.exec();
}

