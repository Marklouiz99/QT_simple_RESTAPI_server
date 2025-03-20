cmake_minimum_required(VERSION 3.16)

project(RESTAPI_SERVER LANGUAGES CXX)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(QT NAMES Qt6 Qt5 REQUIRED COMPONENTS Core Network Concurrent)
find_package(Qt${QT_VERSION_MAJOR} REQUIRED COMPONENTS Core Network Concurrent)

add_executable(RESTAPI_SERVER
  main.cpp
  httprequest.h httprequest.cpp
  httpresponse.h httpresponse.cpp
  httpparser.h httpparser.cpp
  crudhandler.h crudhandler.cpp
  router.h router.cpp
  httpconnection.h httpconnection.cpp
  httpserver.h httpserver.cpp
)
target_link_libraries(RESTAPI_SERVER Qt${QT_VERSION_MAJOR}::Core Qt${QT_VERSION_MAJOR}::Network Qt${QT_VERSION_MAJOR}::Concurrent)

include(GNUInstallDirs)
install(TARGETS RESTAPI_SERVER
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
