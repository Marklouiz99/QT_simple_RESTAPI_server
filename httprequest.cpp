#include "httprequest.h"



QString HttpRequest::getMethod() const
{
    return method;
}

void HttpRequest::setMethod(const QString &newMethod)
{
    method = newMethod;
}

QString HttpRequest::getUrl() const
{
    return url;
}

void HttpRequest::setUrl(const QString &newUrl)
{
    url = newUrl;
}

QMap<QString, QString> HttpRequest::getHeaders() const
{
    return headers;
}

void HttpRequest::setHeaders(const QMap<QString, QString> &newHeaders)
{
    headers = newHeaders;
}

QByteArray HttpRequest::getBody() const
{
    return body;
}

void HttpRequest::setBody(const QByteArray &newBody)
{
    body = newBody;
}
