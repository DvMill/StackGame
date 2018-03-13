#ifndef H_GAME
#define H_GAME

class IStack;

class Game {
public:

	Game(IStack* source, IStack* dest);
	void move();
	void undo();
	virtual ~Game();

private:
	IStack* sourceStack;
	IStack* destStack;

};

#endif