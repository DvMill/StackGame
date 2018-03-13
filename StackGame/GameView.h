#ifndef H_GAMEVIEW
#define H_GAMEVIEW

class IReadCardList;

class GameView {
public:

	GameView(IReadCardList*, IReadCardList*);
	virtual void display();
	virtual ~GameView(void);

	private:
		IReadCardList* L1;
		IReadCardList* L2;
};

#endif