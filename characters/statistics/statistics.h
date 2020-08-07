#ifndef STORMENGINE_STATISTICS_H
#define STORMENGINE_STATISTICS_H

#include <vector>
#include "../character_enums.h"
#include "scar.h"

namespace DawnStorm {
    class Statistics {
    public:
        Statistics(int b, int s, int i) : body(b), soul(s), influence(s) {}
        int Get_Stat(Statistic stat) const;
        int Get_StatMax(Statistic stat) const;
        void SpendStat(Statistic stat, int value);
    private:
        int body, soul, influence;
        int bodySpent = 0, soulSpent = 0, influenceSpent = 0;
        int bodyScar = 0, soulScar = 0, influenceScar = 0;
        std::vector<Scar> scar;
    };
}

#endif //STORMENGINE_STATISTICS_H
