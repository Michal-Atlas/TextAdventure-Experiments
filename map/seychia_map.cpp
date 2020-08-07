#include "map.h"

namespace DawnStorm {
    Map Map::seychia = Map{{
                                   Room{
                                           "The Lone Wild",
                                           {
                                                   {
                                                           {"rock"},
                                                           "A Rock on the ground",
                                                           {
                                                                   {
                                                                           {"pick", "take"},
                                                                           [] {//Game::player.Inventory.push_back(&Item::Rock);
                                                                           }
                                                                   }
                                                           }
                                                   }
                                           }
                                   }
                           }};
}