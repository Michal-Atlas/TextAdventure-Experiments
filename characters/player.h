#ifndef STORM_ENGINE_PLAYER_H
#define STORM_ENGINE_PLAYER_H

#include <utility>

#include "character.h"
#include "../combat/assailable.h"

namespace DawnStorm {
    class Player : public Character, public Assailable {
    public:
        Player(std::string name, Statistic stats, Race race, Size size, Profession_Component professions) : Character(
                std::move(name), stats, race, size), Professions(std::move(professions)) {}

        Profession_Component Professions;
    private:
        void Choose_Race(std::string race);
    };
}

#endif //STORM_ENGINE_PLAYER_H
