#include <iostream>
#include "game.h"
#include "map/interactible.h"

#define Msg_Welcome "Welcome to DawnStorm, for the System manual, please go to https://dawnstorm.michal-atlas.co"
#define Cursor " > "

namespace DawnStorm {
    const Map *Game::world = &Map::seychia;
    Player Game::player = Player{{5, 10, 5}, Normal, {}};

    void Game::Run() {
        std::cout << Msg_Welcome << std::endl << std::endl;
        Character_Initialization();
        bool running = true;
        while (running) {
            std::cout << std::endl << Cursor;
            std::string input;
            std::getline(std::cin, input);
            Command_ID comm = Command::CommandFromString(input);
            switch (comm) {
                case invalid:
                    std::cout << "Unknown Command" << std::endl;
                    break;
                case quit:
                    running = false;
                    break;
                case interact:
                    Interactable *inter = world->GetInteractable(input);
                    if (inter != nullptr) {
                        inter->Interact(this);
                    }
                    break;
            }
        }
    }

    void Game::Character_Initialization() {
        player.stats = Statistics{5, 10, 5};
        player.size = Size::Normal;
        /*{// RACE SELECTION
            bool success = false;
            std::cout << "Choose your race:\n- [0] Human\n - [1] Goblin\n - [2] Isk" << std::endl << std::endl
                      << Cursor;
            int raceChoice;
            while (!success) {
                std::cin >> raceChoice;
                success = false;
            }

        }*/
        {// STAT ALLOCATION

        }
    }
}