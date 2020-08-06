#ifndef STORMENGINE_CHARACTER_H
#define STORMENGINE_CHARACTER_H

#include <string>
#include <utility>
#include "professions/profession_component.h"

namespace DawnStorm {
    enum Size {
        Scrawny, Tiny, Small, Normal, Large, Huge, Giant, Colossal, Immense, Primal
    };

    class Character {
    public:
        Character(std::string _name, Statistic _stats, Race _race, Size _size) : name(std::move(_name)), stats(std::move(_stats)), race(_race), size(_size) {}
        Statistic stats;
        Size GetSize(){ return size; }
    private:
        std::string name;
        std::string description;
        void Choose_Race(Race choice);
        int rank;
        Profession_Component professions;
        Race race;
        Size size;
    };
}

#endif //STORMENGINE_CHARACTER_H
