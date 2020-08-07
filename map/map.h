#ifndef STORM_ENGINE_MAP_H
#define STORM_ENGINE_MAP_H

#include <utility>
#include <vector>
#include <string>
#include "interactable.h"
#include "../ai/ai.h"

namespace DawnStorm {
    class Room {
    public:
        Room(std::string desc, std::vector<Interactable> inter) : description(std::move(desc)),
                                                                  interactables(std::move(inter)) {}

        void Enter();

        std::string description;
        std::vector<Interactable> interactables;
    };

    class Map {
    public:
        Map(std::vector<Room> _rooms) : rooms(std::move(_rooms)) { current = &rooms[0]; }

        Room *current;

        void Enter();

        std::vector<Room> rooms;
        static Map seychia;

        void LookAt(const std::string &input) const;

        Interactable *InteractableFromString(const std::string &input) const;
    };
}

#endif //STORM_ENGINE_MAP_H
