cmake_minimum_required(VERSION 3.17)
project(StormEngine)

set(CMAKE_CXX_STANDARD 14)

add_library(StormEngine roll.cpp character/statistics/statistics.cpp character/statistics/statistics.h character/character.cpp character/character.h character/statistics/scar.h character/professions/professions.cpp character/professions/profession_component.h character/professions/profession.h character/professions/ability.h character/character_enums.h)
