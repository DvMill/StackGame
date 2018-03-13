#include <string>
#include <iostream>
#include <vector>

#include "IReadCardList.h"
#include "GameView.h"
#include "CardList.h"

using namespace std;

GameView::GameView(IReadCardList* a, IReadCardList* b):
	L1(a), L2(b)
{

}

GameView::~GameView(void)
{
	delete L1;
	delete L2;

}


void GameView::display()
{
	//1st
	cout << "1st Stack: ";
	//cout << L1->getFirst()->getRank();
	int r =  L1->getFirst()->getRank();
	do
	{
		if (r <= 0)
			break;
		cout << " " << r;
		
		r = L1->getNext()->getRank();
	} while (r>0);
	
	cout << "              2nd Stack: ";
	//2nd
	int s = L2->getFirst()->getRank();
	do
	{
		if (s <= 0)
			break;
		cout << " " << s;
		
		s = L2->getNext()->getRank();
	} while (s>0);


	cout << endl;
}