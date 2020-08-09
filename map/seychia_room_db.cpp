#include <map>
#include "map.h"

namespace DawnStorm {
    std::map<std::string, Room> Room::DB = {
            {"dungeon_0", Room{
                    "The Lone Wild",
                    {
                            {
                                    "rock"
                            }
                    }
            }}
    };
}
