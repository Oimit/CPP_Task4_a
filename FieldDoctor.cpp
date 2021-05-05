#include "Board.hpp"
#include "City.hpp"
#include "Color.hpp"
#include "Player.hpp"
#include "FieldDoctor.hpp"
using namespace std;
using namespace pandemic;

Player&FieldDoctor::treat(City c) {
    return *this;
}
