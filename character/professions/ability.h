#ifndef STORMENGINE_ABILITY_H
#define STORMENGINE_ABILITY_H

#include <string>
#include <map>

namespace DawnStorm {
    enum Ability_ID {
        amulet_user,
        battle_caster
    };
    const std::map<Ability_ID, std::string> Ability_Info = {
            {amulet_user, "Amulet user: You are able to extract Mana from magic glyphs, 1 Mana per Second"},
            {battle_caster, "Battle Caster: You get -1 per attack (the limit is still +3) when casting after having taken damage"}
    };
}

#endif //STORMENGINE_ABILITY_H
