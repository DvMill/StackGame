
#include "IStack.h"
#include "Game.h"

using namespace std;

Game::Game(IStack* source, IStack* dest):
	sourceStack(source), destStack(dest)
{
}

Game::~Game()
{
	delete sourceStack;
	delete destStack;
}

void Game::undo()
{
	if (!destStack->isEmpty())
	{
		Card* newCard = destStack->pop();
		sourceStack->push(newCard);
	}
}

void Game::move()
{
	if (!sourceStack->isEmpty())
	{
		Card* newCard = sourceStack->pop();
		destStack->push(newCard);
	} 		
	
}

