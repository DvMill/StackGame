#include <string>
#include <iostream>


#include "CardList.h"
#include "SStack.h"
#include "Deck.h"



using namespace std;

SStack::SStack()
{

}

Card* SStack::pop()
{
	return removeLast();
}

void SStack::push(Card* poopyhead)
{
	_card = poopyhead;
	append(poopyhead);
}

bool SStack::isEmpty()
{
	return CardList::isEmpty();
}

SStack::~SStack()
{
	delete _card;
}