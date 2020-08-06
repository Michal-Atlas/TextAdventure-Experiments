#ifndef STORMENGINE_PROFESSION_COMPONENT_H
#define STORMENGINE_PROFESSION_COMPONENT_H

#include <vector>
#include "profession.h"
#include "../character_enums.h"
#include "ability.h"

namespace DawnStorm {
    class Profession_Component {
    public:
        void RankUp(Profession_ID profession, Ability_ID ability);
        int GetRank(Profession_ID profession);
    private:
        std::map<Profession_ID, float> professions;
        std::vector<Ability_ID> abilities;
    };
}

#endif //STORMENGINE_PROFESSION_COMPONENT_H
