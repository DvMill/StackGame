#ifndef H_CARD
#define H_CARD



class Card {
private:
	int rank;

public:
	Card(int rank);
	virtual ~Card();
	virtual int getRank();
};

#endif