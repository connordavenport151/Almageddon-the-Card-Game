#pragma once
using namespace std;
#include <queue>
#include <vector>
#include "Card.h"

class Deck
{
public:
	Deck(int size);
	void createHand();
	Card * playCard(int cardIndex);
	void deleteCards(int cardIndex1, int cardIndex2);
	void getHand();
	void getCard(int cardIndex);
	void updateHand();
	void shuffle();

private:
	int numberOfItems = 0;
	queue<Card *> deckQueue;
	vector<Card *> hand;
};

