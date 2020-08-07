#ifndef STORMENGINE_NPC_H
#define STORMENGINE_NPC_H

#include "../../ai/ai.h"
#include "dialogue_component.h"
#include "../../combat/assailable.h"

namespace DawnStorm {
    class NPC : AI, Assailable {
    public:
        Dialogue_Component dialogue;
    };
}

#endif //STORMENGINE_NPC_H
