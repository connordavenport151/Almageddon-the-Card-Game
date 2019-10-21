#include "Deck.h"
#include "Card.h"
#include <queue>
#include <iostream>
#include <string>
using namespace std;

Deck::Deck(int size)
{
	//Create a deck (queue) with the desired size 
	//Constraints: Card sizes 1-10
	int fill = 0;
	for (int i = 0; i < size; i++)
	{
		if (fill+1 <= 11)
		{
			//Fill is iteration + 1 to avoid a card of 0
			fill = fill + 1;
			Card * cardFill = new Card(fill);
			//Add cards to queue
			deckQueue.push(cardFill);
			numberOfItems++;

			//Reset to zero when fill gets to ten
			if (fill + 1 == 11)
				fill = 0;
		}
		
	}
}

void Deck::createHand()
{
	//Pop top 5 cards off of queue and stick them into a hand vector
	//SHOULD ONLY BE RAN AT START OF GAME
	for (int i = 0; i < 5; i++)
	{
		hand.push_back(deckQueue.front());
		deckQueue.pop();
	}
}

Card * Deck::playCard(int cardIndex)
{
	Card * temp;
	temp = hand.at(cardIndex-1);

	return temp;
}

void Deck::deleteCards(int cardIndex1, int cardIndex2)
{
	if (cardIndex1 > cardIndex2)
	{
		//Delete the pointer & set the vector at that index to null
		//delete hand.at(cardIndex1 - 1);
		hand.erase(hand.begin() + (cardIndex1 - 1));

		//delete hand.at(cardIndex2 - 1);
		hand.erase(hand.begin() + (cardIndex2 - 1));
	}

	if (cardIndex2 > cardIndex1)
	{
		//Delete the pointer & set the vector at that index to null
		//delete hand.at(cardIndex2 - 1);
		hand.erase(hand.begin() + (cardIndex2 - 1));

		//delete hand.at(cardIndex1 - 1);
		hand.erase(hand.begin() + (cardIndex1 - 1));
	}
}

void Deck::getHand()
{
	string name;
	//Print cards in hand to player
	for (int i = 0; i < hand.size(); i++)
	{
		switch (hand.at(i)->getValue())
		{
		case 1:
			name = "Fireball";
			break;
		case 2: 
			name = "Hydroblast";
			break;
		case 3:
			name = "Rockslide";
			break;
		case 4:
			name = "Gust";
			break;
		case 5:
			name = "Ice Beam";
			break;
		case 6:
			name = "Lightning Strike";
			break;
		case 7:
			name = "Typhoon";
			break;
		case 8:
			name = "Steam Blast";
			break;
		case 9:
			name = "Lava Burst";
			break;
		case 10:
			name = "Tornado";
			break;
		default:
			name = "Unknown";
			break;
		}

		cout << "Card " << i + 1 << ": " << name << "\n";
	}

}

void Deck::getCard(int cardIndex)
{
	string name;
	//Print chosen cards to player
	for (int i = 0; i < hand.size(); i++)
	{
		if (i == cardIndex-1)
		{
			switch (hand.at(i)->getValue())
			{
			case 1:
				name = "Fireball";
				break;
			case 2:
				name = "Hydroblast";
				break;
			case 3:
				name = "Rockslide";
				break;
			case 4:
				name = "Gust";
				break;
			case 5:
				name = "Ice Beam";
				break;
			case 6:
				name = "Lightning Strike";
				break;
			case 7:
				name = "Typhoon";
				break;
			case 8:
				name = "Steam Blast";
				break;
			case 9:
				name = "Lava Burst";
				break;
			case 10:
				name = "Tornado";
				break;
			default:
				name = "Unknown";
				break;
			}
			cout << "Chosen Card: " << name << "\n";
		}
	}
}

void Deck::updateHand()
{
	//Adds two more cards to the depleted hand. Should be played after playCard
	for (int i = 0; i < 2; i++)
	{
		hand.push_back(deckQueue.front());
		deckQueue.pop();
	}
}

void Deck::shuffle()
{
	vector<Card *> tempcards;

	while (deckQueue.size() != 0)
	{
		tempcards.push_back(deckQueue.front());
		deckQueue.pop();
	}

	for (int i = 0; i < tempcards.size(); i++)
	{
		for (int j = 0; j < tempcards.size(); j++)
		{
			if (rand() % 2 == 0)
			{

				Card * tempc = tempcards[i];
				tempcards[i] = tempcards[j];
				tempcards[j] = tempc;
			}
		}
	}

	while (tempcards.size() > 0)
	{
		deckQueue.push(tempcards.back());
		tempcards.pop_back();
	}
}
