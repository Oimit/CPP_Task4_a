#pragma once

#include "City.hpp"
#include <ostream>
#include <map>
#include <string>
using namespace std;

namespace pandemic
{

  class Board
  {

  private:
    map<City, int> deseases;

  public:
    Board();
    int& operator[](City c);
    friend ostream& operator<<(ostream &os, const Board &b);
    static bool is_clean();
    void remove_cures();
  };
}