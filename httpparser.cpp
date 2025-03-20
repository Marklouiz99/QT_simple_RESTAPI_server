#include "httpparser.h"


HttpRequest HttpParser::parse(const QByteArray &data)
{
    HttpRequest request;
    QList<QByteArray> lines = data.split('\n');
    if (!lines.isEmpty()) {
        QStringList tokens = QString(lines.first()).split(' ', Qt::SkipEmptyParts);
        if (tokens.size() >= 2) {
            request.setMethod(tokens.at(0));
            request.setMethod(tokens.at(1));
        }
    }
    // For brevity, headers and body parsing are not implemented.
    return request;
}
