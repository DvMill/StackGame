#include <string>
#include <iostream>
#include <vector>
#include "Card.h"


Card::Card(int r)
{
	rank = r;
}

int Card::getRank()
{
	return rank;
}

Card::~Card()
{
}