#include <iostream>
#include "game.h"
#include "map/interactible.h"

#define Msg_Welcome "Welcome to DawnStorm, for the System manual, please go to https://dawnstorm.michal-atlas.co"
#define Cursor " > "

namespace DawnStorm {
    Map *Game::world = nullptr;
    Player Game::player = Player{{5, 10, 5}, Normal, {}};
    Room *Game::currentRoom = nullptr;
    void Game::Run() {
        world = &Map::seychia;
        currentRoom = &Room::DB[world->rooms[0]];
        std::cout << Msg_Welcome << std::endl << std::endl;
        bool running = true;
        while (running) {
            std::cout << std::endl << Cursor;
            std::string input;
            std::getline(std::cin, input);
            if (input.find("quit") != std::string::npos) {
                running = false;
            } else {
                Interactable *inter = currentRoom->GetInteractable(input);
                if (inter != nullptr) {
                    inter->Interact(this);
                } else {
                    std::cout << "Unknown Command";
                }
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