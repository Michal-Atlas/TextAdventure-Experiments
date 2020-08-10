#include <string>
#include <map>
#include "item.h"

namespace DawnStorm {
    std::map<std::string, Item> Item::DB = {
            {"rock", Item{}}
    };
}