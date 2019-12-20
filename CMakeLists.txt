cmake_minimum_required(VERSION 3.15)
project(QuizGameClient C)

set(CMAKE_C_STANDARD 11)

add_executable(QuizGameClient main.c UtilitySocketClient.c UtilitySocketClient.h)