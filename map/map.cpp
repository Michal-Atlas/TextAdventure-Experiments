#include <iostream>
#include "map.h"
#include "interactible.h"

namespace DawnStorm {
    Interactable *Room::GetInteractable(const std::string &input) const {
        Interactable *interactable = nullptr;
        int maxConf = 0;

        for (const std::string &interac : interactables) {
            Interactable *inter = &Interactable::DB.at(interac);
            int confidence = 0;
            for (std::string &key : inter->Keywords) {
                if (input.find(key) != std::string::npos) {
                    confidence++;
                }
            }
            if (confidence > maxConf) {
                interactable = inter;
                maxConf = confidence;
            }
        }
        return interactable;
    }
}