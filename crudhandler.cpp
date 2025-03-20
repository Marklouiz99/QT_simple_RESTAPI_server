#include "crudhandler.h"


HttpResponse CRUDHandler::handle(const HttpRequest &request)
{
    HttpResponse response;

    if (request.getMethod() == "GET") {
        response.setStatusCode(200);
        response.setBody( "GET response from CRUDHandler");
    } else if (request.getMethod()  == "POST") {
        response.setStatusCode(201);
        response.setBody( "POST response from CRUDHandler");
    } else if (request.getMethod()  == "PUT") {
        response.setStatusCode(200);
        response.setBody(  "PUT response from CRUDHandler");
    } else if (request.getMethod()  == "DELETE") {
        response.setStatusCode(200);
        response.setBody ( "DELETE response from CRUDHandler");
    } else {
        response.setStatusCode(405);
        response.setBody("Method Not Allowed");
    }

    return response;
}
