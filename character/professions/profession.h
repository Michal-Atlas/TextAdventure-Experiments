#ifndef STORMENGINE_PROFESSION_H
#define STORMENGINE_PROFESSION_H

#include "ability.h"

namespace DawnStorm {
    enum Profession_ID{
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
        Profession(Profession_ID id, std::string name, std::string description, std::vector<std::string> skills, std::vector<Ability_ID> abilities) :
            Id(id),
            Name(std::move(name)),
            Description(std::move(description)),
            Skills(std::move(skills)),
            Abilities(std::move(abilities)){}
        Profession_ID Id;
        std::string Name;
        std::string Description;
        std::vector<std::string> Skills;
        std::vector<Ability_ID> Abilities;
        std::string Print() const;
    };

    extern const std::map<Profession_ID,Profession> Professions_Info;
}

#endif //STORMENGINE_PROFESSION_H
