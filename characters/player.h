#ifndef STORM_ENGINE_PLAYER_H
#define STORM_ENGINE_PLAYER_H

#include <utility>

#include "../combat/assailable.h"
#include "size.h"
#include "professions/profession_component.h"
#include "../items/item.h"

namespace DawnStorm {
    class Player : public Assailable {
    public:
        Player(Statistics stats, Size size, Profession_Component professions) :
                Assailable(std::move(stats), size),
                Professions(std::move(professions)) {}

        Profession_Component Professions;
        std::vector<Item *> Inventory;
    };
}

#endif //STORM_ENGINE_PLAYER_H
