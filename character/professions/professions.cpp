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

    std::string Profession::Print() const {
        std::string out = "|" + Name + "|\n\t" + Description + "\n\nSkills:";
        for (const std::string& skill : Skills) {
            out += "\n\t - " + skill;
        }
        out += "\n\nAbilities:";
        for (Ability_ID id : Abilities) {
            out += "\n\t - " + Ability_Info.at(id);
        }
        out += "\n";
        return out;
    }

    const std::map<Profession_ID,Profession> Professions_Info {
            {Acolyte, Profession{
                    Acolyte,
                    "Acolyte",
                    "The Acolyte is the basic magic class. Identifying arcane occurences that you have already seen or know about is the domain of the acolyte.",
                    {
                            "Spellcasting",
                            "Identifying spells and magical effects"
                    },
                    {
                            amulet_user, battle_caster
                    }
            }}
    };
}
