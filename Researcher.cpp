#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "Researcher.hpp"
using namespace std;
using namespace pandemic;

Player& Researcher::discover_cure(Color col){
    return *this;
}
