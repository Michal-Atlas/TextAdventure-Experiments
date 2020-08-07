#include <iostream>
#include "map.h"

namespace DawnStorm {
    void Map::LookAt(const std::string &input) const {
        Interactable *inter = InteractableFromString(input);
        std::cout << std::endl << inter->Description << std::endl;

    }

    Interactable *Map::InteractableFromString(const std::string &input) const {
        Interactable *interactable;
        int maxConf = 0;
        {
            for (Interactable &inter : current->interactables) {
                int confidence = 0;
                for (std::string &key : inter.Keywords) {
                    if (input.find(key) != std::string::npos) {
                        confidence++;
                    }
                }
                if (confidence > maxConf) {
                    interactable = &inter;
                    maxConf = confidence;
                }
            }
        }
        return interactable;
    }
}