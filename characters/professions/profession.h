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

    struct Profession {
        Profession(
                Profession_ID id,
                std::string name,
                std::vector<Ability_ID> abilities,
                std::vector<Profession_ID> prerequisites,
                int prerequisiteTotal
        ) :
                Id(id),
                Name(std::move(name)),
                Abilities(std::move(abilities)),
                Prerequisites(std::move(prerequisites)),
                PrerequisiteTotal(prerequisiteTotal) {}

        Profession_ID Id;
        std::string Name;
        std::vector<Ability_ID> Abilities;

        std::string Print() const;

        std::vector<Profession_ID> Prerequisites;
        int PrerequisiteTotal;
    };

    extern const std::map<Profession_ID,Profession> Professions_Info;
}

#endif //STORMENGINE_PROFESSION_H
