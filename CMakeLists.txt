cmake_minimum_required(VERSION 3.5)

project(Praktikum2 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Praktikum2 main.cpp
    tile.h tile.cpp
    character.h character.cpp
    level.h level.cpp
    dungeoncrawler.h dungeoncrawler.cpp
    abstractui.h abstractui.cpp
    floor.h floor.cpp
    wall.h wall.cpp
    portal.h portal.cpp
    terminalui.h terminalui.cpp)

include(GNUInstallDirs)
install(TARGETS Praktikum2
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
