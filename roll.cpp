#include <iostream>
#include <random>
#include "roll.h"

namespace DawnStorm {
    bool Roll(int DR, int Bonus) {
        std::random_device rd;
        int die1 = (int) (rd() % 6) + 1;
        int die2 = (int) (rd() % 6) + 1;
        int die3 = (int) (rd() % 6) + 1;
        int Total = die1 + die2 + die3;
        std::clog
                << ((Total < DR) ? "Success: " : "Failure: ")
                << "("
                << die1 << "+"
                << die2 << "+"
                << die3 << ")-" << Bonus << " = "
                << Total - Bonus << " DR:[" << DR << "]" << std::endl;
        return Total - Bonus <= DR;
    }
}
