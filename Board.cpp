#include "Board.hpp"
#include <map>
#include <string>

using namespace std;

namespace pandemic
{
	Board::Board(){}

	int &Board::operator[](City c)
	{
		return deseases[c];
	}

	ostream& operator<<(ostream &os, const Board &b)
	{
		os << " Amit Cohen " << endl;
		return os;
	}

	bool Board::is_clean()
	{
		return true;
	}

	void Board::remove_cures()
	{
	}
};