#include "commands.h"

namespace DawnStorm {
    const std::vector<std::pair<Command_ID, std::vector<std::string>>> Command::Keywords = {
            {move, {"move", "go", "walk"}},
            {look, {"look", "see"}},
            {quit, {"quit"}}
    };

    Command_ID Command::CommandFromString(std::string input) {
        Command_ID out = invalid;
        int maxConf = 0;
        for (const auto &pair : Command::Keywords) {
            int confidence = 0;
            for (auto key : pair.second) {
                if (input.find(key) != std::string::npos) {
                    confidence++;
                }
            }
            if (confidence > maxConf) {
                out = pair.first;
                maxConf = confidence;
            }
        }
        return out;
    }
}