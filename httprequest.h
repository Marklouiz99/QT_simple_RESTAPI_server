#ifndef HTTPREQUEST_H
#define HTTPREQUEST_H

#include <QString>
#include <QMap>
#include <QByteArray>

class HttpRequest
{
public:
    QString getMethod() const;
    void setMethod(const QString &newMethod);

    QString getUrl() const;
    void setUrl(const QString &newUrl);

    QMap<QString, QString> getHeaders() const;
    void setHeaders(const QMap<QString, QString> &newHeaders);

    QByteArray getBody() const;
    void setBody(const QByteArray &newBody);

private:
    QString method;
    QString url;
    QMap<QString, QString> headers;
    QByteArray body;
};

#endif // HTTPREQUEST_H
