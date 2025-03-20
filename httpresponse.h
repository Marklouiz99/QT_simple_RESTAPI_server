#ifndef HTTPRESPONSE_H
#define HTTPRESPONSE_H

#include <QString>
#include <QMap>
#include <QByteArray>

class HttpResponse
{
private:
    int statusCode;
    QMap<QString, QString> headers;
    QByteArray body;
public:
    HttpResponse();
    QByteArray toByteArray() const;
    int getStatusCode() const;
    void setStatusCode(int newStatusCode);
    QMap<QString, QString> getHeaders() const;
    void setHeaders(const QMap<QString, QString> &newHeaders);
    QByteArray getBody() const;
    void setBody(const QByteArray &newBody);
};

#endif // HTTPRESPONSE_H
