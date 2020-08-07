#include "profession_component.h"

namespace DawnStorm {
    int Profession_Component::GetRank(Profession_ID profession) {
        if (professions.find(profession) == professions.end()){
            return 0;
        }
        return professions[profession];
    }

    void Profession_Component::RankUp(Profession_ID profession, Ability_ID ability) {
        if (professions.find(profession) == professions.end()){
            professions[profession] = 1;
        } else {
            professions[profession]++;
        }
        abilities.push_back(ability);
    }

    const std::map<Profession_ID, Profession> Profession::Professions_Info{
            {Acolyte, Profession{Acolyte,
                                 "Acolyte",
                                 {
                                         amulet_user, battle_caster
                                 }, {Acolyte}, 0, {}}
            }
    };
}
