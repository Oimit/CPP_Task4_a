#pragma once
#include "Board.hpp"
#include "Color.hpp"
using namespace std;

namespace pandemic
{
    class Player
    {

    protected:
        Board player_board;
        City player_city;
        string player_role;

    public:
        Player(Board &b, City c, string r) : player_board(b), player_city(c), player_role(r){};
        Player(Board &b, City c) : player_board(b), player_city(c){};
        virtual Player &drive(City c);
        virtual Player &fly_direct(City c);
        virtual Player &fly_charter(City c);
        virtual Player &fly_shuttle(City c);
        virtual Player &build();
        virtual Player &discover_cure(Color col);
        virtual Player &treat(City c);
        string role()
        {
            return player_role;
        }
        virtual Player &take_card(City);
    };
}