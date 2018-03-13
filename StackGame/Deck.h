#ifndef H_DECK
#define H_DECK

#include "SStack.h"

class Card;

class Deck: public SStack {
private:
	int rank;
	Card* _card;

public:
	Deck(int numCards);
	virtual ~Deck();

	
};

#endif