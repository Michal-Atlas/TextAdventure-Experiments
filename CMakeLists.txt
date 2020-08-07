cmake_minimum_required(VERSION 3.17)
project(Storm-Engine)

set(CMAKE_CXX_STANDARD 14)

add_library(Storm-Engine roll.cpp characters/statistics/statistics.cpp characters/statistics/statistics.h characters/statistics/scar.h characters/professions/professions.cpp characters/professions/profession_component.h characters/professions/profession.h characters/professions/ability.h characters/character_enums.h characters/player.h characters/npc/npc.cpp characters/npc/npc.h ai/ai.h characters/npc/dialogue_component.cpp characters/npc/dialogue_component.h combat/assailable.h commands.h characters/professions/ability.cpp commands.cpp map/map.cpp map/map.h map/interactable.h characters/size.h map/seychia_map.cpp items/item.cpp items/item.h)
add_executable(DawnStorm main.cpp game.cpp game.h)

add_dependencies(DawnStorm Storm-Engine)
target_link_libraries(DawnStorm Storm-Engine)