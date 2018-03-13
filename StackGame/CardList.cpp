#include <string>
#include <iostream>

#include "CardList.h"
#include "Card.h"
#include <vector>


CardList::CardList()
{
	current_index = 0;
	numCards = 0;
}

CardList::~CardList()
{
}

Card* CardList::getFirst()
{
	if (isEmpty())
		return new Card(-1);
	Card* newcard = cards[0];
	return newcard;
}
Card* CardList::getNext()
{
	current_index++;
	if (current_index >= numCards)
	{
		current_index = 0;
		return new Card(-1);
	}

	Card* newcard = cards[current_index];
	return newcard;
}
void CardList::append(Card* c)
{
	Card* newCard = c;
	cards.push_back(c);
	numCards++;
}

Card* CardList::removeLast()
{
	Card* newCard = cards.back();
	cards.pop_back();
	numCards--;
	return newCard;
}
bool CardList::isEmpty()
{
	if (numCards==0)
		return true;
	return false;
}