#ifndef STORM_ENGINE_ITEM_H
#define STORM_ENGINE_ITEM_H

namespace DawnStorm {
    class Item {

    public:
        static std::map<std::string, Item> DB;
        const std::string Name;
    };
}

#endif //STORM_ENGINE_ITEM_H
