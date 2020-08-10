#include <iostream>
#include <algorithm>
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
            } else if (confidence == maxConf && confidence != 0) {
                std::cout << "Not sure what you mean, use: ";

                std::vector<std::string> diff;
                std::set_difference(interactable->Keywords.begin(), interactable->Keywords.end(),
                                    inter->Keywords.begin(), inter->Keywords.end(),
                                    std::inserter(diff, diff.begin()));
                for (const auto &i : diff) { std::cout << i << ", "; }
                std::cout << std::endl << "To narrow your intentions." << std::endl;
                return nullptr;
            }
        }
        if (interactable == nullptr) { std::cout << "Unknown Command" << std::endl; }
        return interactable;
    }
}