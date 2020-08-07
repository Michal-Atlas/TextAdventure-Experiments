#ifndef STORM_ENGINE_INTERACTABLE_H
#define STORM_ENGINE_INTERACTABLE_H

#include <utility>
#include <vector>
#include <string>
#include <functional>

namespace DawnStorm {
    class Interactable {
    public:
        Interactable(std::vector<std::string> keywords, std::string description, std::vector<
                std::pair<
                        std::vector<std::string>,
                        std::function<void()>>> interact) : Keywords(std::move(keywords)),
                                                            Description(std::move(description)),
                                                            Interact(std::move(interact)) {}

        std::vector<std::string> Keywords;
        std::string Description;
        std::vector<
                std::pair<
                        std::vector<std::string>,
                        std::function<void()>>> Interact;
    };

}

#endif //STORM_ENGINE_INTERACTABLE_H
