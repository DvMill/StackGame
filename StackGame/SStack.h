#ifndef H_SSTACK
#define H_SSTACK


#include "IStack.h"
#include "CardList.h"



class SStack: public IStack, public CardList {
public:
	SStack();
	virtual void push(Card*);
	virtual Card* pop();
	virtual bool isEmpty();
	virtual ~SStack();

private:
	Card* _card;
};

#endif