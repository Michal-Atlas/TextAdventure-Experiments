#ifndef STORMENGINE_ABILITY_H
#define STORMENGINE_ABILITY_H

#include <string>
#include <map>

namespace DawnStorm {
    enum Ability_ID {
        amulet_user,
        battle_caster
    };

    class Ability {
    public:
        static const std::map<Ability_ID, std::string> Info;

        Ability() = delete;
    };
}

#endif //STORMENGINE_ABILITY_H
