#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Virologist.hpp"
using namespace std;
using namespace pandemic;

Player& Virologist::treat(City c){
    return *this;
}
