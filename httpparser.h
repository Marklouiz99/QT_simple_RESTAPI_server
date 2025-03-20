#ifndef HTTPPARSER_H
#define HTTPPARSER_H

#include "HttpRequest.h"
#include <QByteArray>
#include <QStringList>


class HttpParser
{
public:

    HttpRequest parse(const QByteArray &data);
};

#endif // HTTPPARSER_H
