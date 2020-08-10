#ifndef STORMENGINE_PROFESSION_H
#define STORMENGINE_PROFESSION_H

#include <utility>
#include "vector"
#include "ability.h"

namespace DawnStorm {
    enum Profession_ID {
        Acolyte,
        Fighter,
        Hunter,
        Herbalist,
        Noble,
        Squire,
        Thief,
        Druid,
        Mage,
        Nord,
        Vedmak,
        Warmage,
        Witch
    };

    struct Bonus {
        std::vector<std::string> keywords;
    };

    struct Profession {
        Profession(Profession_ID id, std::string name, std::vector<Ability_ID> abilities,
                   std::vector<Profession_ID> prerequisites, int prerequisiteTotal,
                   const std::vector<Bonus> bonuses) :
                Id(id),
                Name(std::move(name)),
                Abilities(std::move(abilities)),
                Prerequisites(std::move(prerequisites)),
                PrerequisiteTotal(prerequisiteTotal), Bonuses(bonuses) {}

        const Profession_ID Id;
        const std::string Name;
        const std::vector<Ability_ID> Abilities;
        const std::vector<Profession_ID> Prerequisites;
        const int PrerequisiteTotal;
        const std::vector<Bonus> Bonuses;
        static const std::map<Profession_ID, Profession> Professions_Info;
    };


}

#endif //STORMENGINE_PROFESSION_H
