#ifndef H_IStack
#define H_IStack

#include "Card.h"

class IStack {
public:
	virtual void push(Card*) = 0;
	virtual Card* pop() = 0;
	virtual bool isEmpty() = 0;
	virtual ~IStack() {};

};

#endif