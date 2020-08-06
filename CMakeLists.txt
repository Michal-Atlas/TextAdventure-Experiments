cmake_minimum_required(VERSION 3.17)
project(StormEngine)

set(CMAKE_CXX_STANDARD 14)

add_library(StormEngine roll.cpp characters/statistics/statistics.cpp characters/statistics/statistics.h characters/character.cpp characters/character.h characters/statistics/scar.h characters/professions/professions.cpp characters/professions/profession_component.h characters/professions/profession.h characters/professions/ability.h characters/character_enums.h characters/player.h characters/npc/npc.cpp characters/npc/npc.h ai/ai.h characters/npc/dialogue_component.cpp characters/npc/dialogue_component.h combat/assailable.h)
add_executable(Test Test.cpp)
target_link_libraries(Test StormEngine)
add_dependencies(Test StormEngine)