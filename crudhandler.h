#ifndef CRUDHANDLER_H
#define CRUDHANDLER_H

#include "HttpRequest.h"
#include "HttpResponse.h"

class CRUDHandler
{
public:
    HttpResponse handle(const HttpRequest &request);
};

#endif // CRUDHANDLER_H
