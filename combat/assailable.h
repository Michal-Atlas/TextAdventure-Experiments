#ifndef STORMENGINE_ASSAILABLE_H
#define STORMENGINE_ASSAILABLE_H

#include <utility>

#include "../characters/statistics/statistics.h"
#include "../characters/character.h"

namespace DawnStorm {
    class Assailable {
    public:
        Assailable(Statistics _stats, Size _size) : stats(std::move(_stats)), size(_size) {}

        Statistics stats;
        Size size;

        void Attack();

    private:
    };
}

#endif //STORMENGINE_ASSAILABLE_H
