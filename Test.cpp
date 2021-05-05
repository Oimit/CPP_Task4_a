#include "doctest.h"

#include "Board.hpp"
#include "Player.hpp"

#include "Researcher.hpp"
#include "Scientist.hpp"
#include "FieldDoctor.hpp"
#include "GeneSplicer.hpp"
#include "OperationsExpert.hpp"
#include "Dispatcher.hpp"
#include "Medic.hpp"
#include "Virologist.hpp"

using namespace pandemic;
using namespace std;


// checking drives from connections cities.
TEST_CASE("Drive")
{
	Board board;
	Player p{board, Paris};
	CHECK_NOTHROW(p.drive(City::Madrid));
	CHECK_NOTHROW(p.drive(City::NewYork));
	CHECK_NOTHROW(p.drive(City::Washington));
	CHECK_NOTHROW(p.drive(City::Atlanta));
	CHECK_NOTHROW(p.drive(City::Miami));
	CHECK_NOTHROW(p.drive(City::MexicoCity));
	CHECK_NOTHROW(p.drive(City::Lima));
	CHECK_NOTHROW(p.drive(City::Bogota));
	CHECK_NOTHROW(p.drive(City::Miami));
	CHECK_NOTHROW(p.drive(City::Washington));
	CHECK_NOTHROW(p.drive(City::NewYork));
	CHECK_NOTHROW(p.drive(City::Madrid));
	CHECK_NOTHROW(p.drive(City::Algiers));
	CHECK_NOTHROW(p.drive(City::Cairo));
	CHECK_NOTHROW(p.drive(City::Riyadh));
	CHECK_NOTHROW(p.drive(City::Riyadh));
	CHECK_NOTHROW(p.drive(City::Karachi));
	CHECK_NOTHROW(p.drive(City::Mumbai));
	CHECK_NOTHROW(p.drive(City::Chennai));
	CHECK_NOTHROW(p.drive(City::Jakarta));
}

// Checking Scientist.
TEST_CASE("Scientist")
{
	Board board;
	Scientist player{board, City::SaoPaulo, 3};
	player.take_card(City::SaoPaulo);
	player.build();
	player.take_card(City::Lagos);
	player.take_card(City::Johannesburg);
	player.take_card(City::MexicoCity);
	CHECK_NOTHROW(player.discover_cure(Color::Yellow));
}

// Checking Researcher.
TEST_CASE("Researcher")
{
	Board board;
	Researcher player{board, City::Seoul};
	player.take_card(City::Beijing);
	player.take_card(City::Osaka);
	player.take_card(City::HongKong);
	player.take_card(City::Taipei);
	player.take_card(City::Sydney);
	CHECK_NOTHROW(player.discover_cure(Color::Red));
}

//Checking FieldDoctor.
TEST_CASE("FieldDoctor")
{
	Board board;
	FieldDoctor player{board, City::Atlanta};
	player.take_card(City::Washington);
	player.treat(City::Miami);
	CHECK(board[City::Miami] == 0);
}

//Checking OperationsExpert.
TEST_CASE("OperationsExpert")
{s
	Board board;
	OperationsExpert player{board, City::Atlanta};
	player.take_card(City::Atlanta);
	player.build(); //build in atlanta, but dont take card
	player.treat(City::Atlanta);
	CHECK(board[City::Atlanta] == 0);
}