cmake_minimum_required(VERSION 3.5)

project(Parcial2_Sebastian LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Parcial2_Sebastian main.cpp
    eficiencia.h eficiencia.cpp
    jugadores.h jugadores.cpp
    tablero.h tablero.cpp
    reglas.h reglas.cpp)

include(GNUInstallDirs)
install(TARGETS Parcial2_Sebastian
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR}
    RUNTIME DESTINATION ${CMAKE_INSTALL_BINDIR}
)
