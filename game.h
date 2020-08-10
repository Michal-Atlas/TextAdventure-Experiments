#ifndef STORM_ENGINE_GAME_H
#define STORM_ENGINE_GAME_H

#include "characters/player.h"
#include "map/map.h"

namespace DawnStorm {
    class Game {
    public:
        static Player player;
        static Map *world;
        static Room *currentRoom;
        static void Character_Initialization();
        void Run();
    };
}

#endif //STORM_ENGINE_GAME_H
