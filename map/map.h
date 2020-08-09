#ifndef STORM_ENGINE_MAP_H
#define STORM_ENGINE_MAP_H

#include <utility>
#include <vector>
#include <string>
#include <map>

namespace DawnStorm {
    class Interactable;

    class Room {
    public:
        static Room *GetRoom(const std::string &id);

        Interactable *GetInteractable(const std::string &input) const;

        Room(std::string desc, std::vector<std::string> inter) : description(std::move(desc)),
                                                                 interactables(std::move(inter)) {}

        void Enter();

        std::string description;
        std::vector<std::string> interactables;
        static std::map<std::string, Room> DB;
    };

    class Map {
    public:
        Map(std::vector<std::string> _rooms) : rooms(std::move(_rooms)) { current = Room::GetRoom(rooms[0]); }

        Room *current;
        std::vector<std::string> rooms;
        static Map seychia;

        Interactable *GetInteractable(const std::string &input) const;
    };
}

#endif //STORM_ENGINE_MAP_H
