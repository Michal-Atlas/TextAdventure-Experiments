#include "interactible.h"
#include <iostream>

namespace DawnStorm {
    std::map<std::string, Interactable> DB = {
            {"rock", {{"look", "rock"}, [](Game *game) { std::cout << "Rock TEXT" << std::endl; }}}
    };
}

