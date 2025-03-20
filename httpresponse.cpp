#include "httpresponse.h"

int HttpResponse::getStatusCode() const
{
    return statusCode;
}

void HttpResponse::setStatusCode(int newStatusCode)
{
    statusCode = newStatusCode;
}

QMap<QString, QString> HttpResponse::getHeaders() const
{
    return headers;
}

void HttpResponse::setHeaders(const QMap<QString, QString> &newHeaders)
{
    headers = newHeaders;
}

QByteArray HttpResponse::getBody() const
{
    return body;
}

void HttpResponse::setBody(const QByteArray &newBody)
{
    body = newBody;
}

HttpResponse::HttpResponse() : statusCode(200) {}

QByteArray HttpResponse::toByteArray() const
{
    QByteArray response;
    response.append("HTTP/1.1 " + QByteArray::number(statusCode) + " OK\r\n");
    for (auto it = headers.constBegin(); it != headers.constEnd(); ++it) {
        response.append(it.key().toUtf8() + ": " + it.value().toUtf8() + "\r\n");
    }
    response.append("\r\n");
    response.append(body);
    return response;
}
