#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Medic.hpp"
using namespace std;
using namespace pandemic;

Player& Medic::treat(City c)
{
    return *this;
}