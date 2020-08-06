#ifndef STORMENGINE_CHARACTER_H
#define STORMENGINE_CHARACTER_H

#include "race/races.h"
#include "stats/stats.h"

namespace DawnStorm {
    class Character {
    public:
        int Get_Stat(Stat stat);

        int Get_StatMax(Stat stat);

    private:
        void Choose_Race(Race choice);

        Stats stats;
        int Rank;
        Race race;
    };

    enum Size {
        Scrawny, Tiny, Small, Normal, Large, Huge, Giant, Colossal, Immense, Primal
    };
}

#endif //STORMENGINE_CHARACTER_H
