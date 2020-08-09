#ifndef STORM_ENGINE_COMMANDS_H
#define STORM_ENGINE_COMMANDS_H

#include <vector>
#include "characters/professions/ability.h"

namespace DawnStorm {
    enum Command_ID {
        move,
        interact,
        talk,
        attack,
        quit,
        invalid
    };

    class Command {
    public:
        static const std::vector<std::pair<Command_ID, std::vector<std::string>>> Keywords;

        Command() = delete;

        static Command_ID CommandFromString(std::string input);
    };
}

#endif //STORM_ENGINE_COMMANDS_H
