#pragma once
#include <string>
#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"

namespace pandemic{

    class GeneSplicer : public Player {

        public:
            GeneSplicer(Board& b, City c) : Player(b, c, "GeneSplicer"){}
            Player& discover_cure();
    };
}