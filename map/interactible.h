#ifndef STORM_ENGINE_SEYCHIA_INTERACTIBLE_DB_H
#define STORM_ENGINE_SEYCHIA_INTERACTIBLE_DB_H

#include <functional>
#include "../game.h"

namespace DawnStorm {
    class Interactable {
    public:
        Interactable(std::vector<std::string> keywords, std::function<void(Game *)> interact) :
                Keywords(std::move(keywords)),
                Interact(std::move(interact)) {}

        std::vector<std::string> Keywords;
        std::function<void(Game *)> Interact;
        static std::map<std::string, Interactable> DB;
    };

}

#endif //STORM_ENGINE_SEYCHIA_INTERACTIBLE_DB_H
