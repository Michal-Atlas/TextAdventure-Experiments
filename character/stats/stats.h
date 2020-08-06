#ifndef STORMENGINE_STATS_H
#define STORMENGINE_STATS_H

namespace DawnStorm {
    class Stats {
    private:
        int Body, Soul, Influence;
        int Body_Scar, Soul_Scar, Influence_Scar;
    };

    enum Stat {
        Body,
        Soul,
        Influence
    };
}

#endif //STORMENGINE_STATS_H
