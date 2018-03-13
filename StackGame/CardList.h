#ifndef H_CARDLIST
#define H_CARDLIST

#include "IReadCardList.h"
#include <vector>

class CardList: public IReadCardList {
private:
	int numCards;
	std::vector<Card*>cards;
	int current_index;


public:
	CardList();
	virtual ~CardList();
	virtual Card* getFirst();
	virtual Card* getNext();
	void append(Card*);
	Card* removeLast();
	bool isEmpty();


};

#endif