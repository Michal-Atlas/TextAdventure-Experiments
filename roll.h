#ifndef STORMENGINE_ROLL_H
#define STORMENGINE_ROLL_H

namespace DawnStorm {
    bool Roll(int DR, int Bonus);

    enum Roll_Difficulty {
        Easy = 8,
        Normal = 10,
        Hard = 15
    };
}

#endif //STORMENGINE_ROLL_H
