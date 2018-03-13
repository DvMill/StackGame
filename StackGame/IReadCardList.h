#ifndef H_IREADCARDLIST
#define H_IREADCARDLIST

#include "Card.h"

class IReadCardList {
public:
	
	virtual Card* getFirst() = 0;
	virtual Card* getNext() = 0;
	virtual ~IReadCardList() {};

};

#endif