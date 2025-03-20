#include "router.h"

void Router::addRoute(const QString &path, const QSharedPointer<CRUDHandler>& handler)
{
    m_routes.insert(path, handler);
}

HttpResponse Router::dispatch(const HttpRequest &request)
{
    if (m_routes.contains(request.getUrl())) {
        return m_routes.value(request.getUrl())->handle(request);
    }
    HttpResponse response;
    response.setStatusCode(404);
    response.setBody("Not Found");
    return response;
}
