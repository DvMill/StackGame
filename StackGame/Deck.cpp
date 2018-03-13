#include <iostream>

#include "Deck.h"
//#include "Card.h"
#include "SStack.h"
#include "CardList.h"
class Card;

Deck::Deck(int numCards) 
{ 
	for (int i = 1; i < numCards+1; i++)
	{
		append(new Card(i));
	}
	
}
Deck::~Deck() { }

