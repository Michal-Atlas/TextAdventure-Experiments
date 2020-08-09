#include <iostream>
#include "map.h"
#include "interactible.h"

namespace DawnStorm {
    Interactable *Map::GetInteractable(const std::string &input) const {
        return current->GetInteractable(input);
    }

    Interactable *Room::GetInteractable(const std::string &input) const {
        /*Interactable *interactable = nullptr;
        int maxConf = 0;
        {
            for (const std::string& interac : interactables) {
                Interactable *inter = &Interactable::DB[interac];
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
        }
        return interactable;*/
    }

    Room *Room::GetRoom(const std::string &id) {
        //return &Room::DB[id];
    }
}