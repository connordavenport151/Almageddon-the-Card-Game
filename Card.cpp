#include "Card.h"

Card::Card(int num_in)
{
	number = num_in;
}

int Card::getValue()
{
	return number;
}
