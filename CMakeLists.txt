cmake_minimum_required(VERSION 3.22)
project(ProjetTakuzuC C)

set(CMAKE_C_STANDARD 99)

add_executable(ProjetTakuzuC main.c menu.c menu.h grille.c grille.h verification.c verification.h automatique.c automatique.h)
