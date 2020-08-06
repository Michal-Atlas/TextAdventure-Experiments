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
        //Profession_Component professions;
    private:
        std::string name;
        std::string description;
    };
}

#endif //STORMENGINE_CHARACTER_H
