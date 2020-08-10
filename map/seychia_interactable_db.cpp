#include "interactible.h"
#include <iostream>
#include "../game.h"

namespace DawnStorm {
    std::map<std::string, Interactable> Interactable::DB = {
            {"rock", Interactable{{"look", "rock"}, [](Game *) { std::cout << "Rock TEXT" << std::endl; }}}
    };
}

