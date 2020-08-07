#ifndef STORMENGINE_SCAR_H
#define STORMENGINE_SCAR_H


#include <string>
#include "../character_enums.h"
#include "../../commands.h"

namespace DawnStorm {
    class Scar {
    public:
        Statistic type;
        int rank;
        std::string description;
    };
}

#endif //STORMENGINE_SCAR_H
