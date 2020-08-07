#ifndef STORMENGINE_ASSAILABLE_H
#define STORMENGINE_ASSAILABLE_H

#include <utility>
#include <functional>

#include "../characters/statistics/statistics.h"
#include "../characters/size.h"

namespace DawnStorm {
    class Assailable {
    public:
        Assailable(Statistics _stats, Size _size) : stats(std::move(_stats)), size(_size) {}

        Statistics stats;
        Size size;

        std::function<void()> Attack;
        std::function<void()> Defend;

    private:
    };
}

#endif //STORMENGINE_ASSAILABLE_H
