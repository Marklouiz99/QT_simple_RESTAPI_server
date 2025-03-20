#ifndef ROUTER_H
#define ROUTER_H

#include <QString>
#include <QMap>
#include <QSharedPointer>
#include "HttpRequest.h"
#include "HttpResponse.h"
#include"crudhandler.h"


class Router
{
public:
    void addRoute(const QString &path, const QSharedPointer<CRUDHandler>& handler);
    HttpResponse dispatch(const HttpRequest &request);

private:
    QMap<QString, QSharedPointer<CRUDHandler>> m_routes;
};

#endif // ROUTER_H
