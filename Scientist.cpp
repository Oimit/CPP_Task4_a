#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Scientist.hpp"
using namespace std;
using namespace pandemic;

Player& Scientist::discover_cure(Color col){
    return *this;
}
