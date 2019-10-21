#include <iostream>
#include <ctime>
#include "Deck.h"
#include "Rules.h"
#include "Battle.h"
using namespace std;

int main()
{
	//game intro
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "Greetings traveler! Welcome to Almageddon, a turn based card game where you must\n";
	cout << "channel the power of the 4 natural elements in order to become the champion wizard.\n";
	cout << "\nFire, Water, Wind, and Earth can be used in their natural forms, as well as in\n";
	cout << "combination to become the Master Wizard!\n";
	cout << "\nLets start with some rules:\n";
	cout << "-You and your opponent will start with the same life total(life points determined by\n";
	cout << " the difficulty you will choose).\n";
	cout << "-Life total is depleted when spells are casted.";
	cout << "-Certain elemental types are able to negate the effects of other elements, which can\n";
	cout << " be seen in the elemental effectiveness chart that will pop up when the game has begun.\n";
	cout << "-The first wizard to drop to 0 life point will be defeated, however, if both wizards\n";
	cout << " drop each other to bellow zero at the same time they wil go into Sudden Death.\n";
	cout << "-With that being said, good luck and may the better spellcaster win!\n";
	Rules();
	//Starting Variables
	int deckSize;
	int playerLife, cpuLife;

	//Ask the player for difficulty
		//0 = short
		//1 = medium
		//2 = long
	cout << "What game length would you like? 0: Short | 1: Medium | 2: Long\n";
	int level;
	cin >> level;

	switch (level) {
	case 0:
		deckSize = 20;
		playerLife = 5;
		cpuLife = 5;
		break;

	case 1:
		deckSize = 40;
		playerLife = 10;
		cpuLife = 10;
		break;

	case 2:
		deckSize = 80;
		playerLife =20;
		cpuLife = 20;
		break;

	default:
		cout << "Input valid intengers";
		break;
	}

	//Create player deck and CPU Deck queues
	Deck * player = new Deck(deckSize);
	Deck * computer = new Deck(deckSize);

	//Shuffle decks
	player->shuffle();
	computer->shuffle();

	//Create player hands from queues
	player->createHand();
	computer->createHand();

	//loop for turns
	int playersAlive = 0;
	while (playersAlive == 0)
	{
		//display life totals
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\nOpponent's Life Total: " << cpuLife << "\n";
		cout << "Your life Total: " << playerLife << "\n";
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

		//show player hand
		cout << "Player Hand:\n";
		player->getHand();
		cout << "\nSelect two cards by typing the number of each card seperated by a space: ";
		int choice1;
		int choice2;
		cin >> choice1 >> choice2;

		//cpu chooses two random cards
		srand(time(0));
		int rand1 = rand() % 5 + 1;
		int rand2 = rand() % 5 + 1;

		if (rand1 == rand2)
		{
			rand1 = rand() % 5 + 1;
		}

		//display the 4 cards that have been chosen
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
		cout << "\nYour chosen spells:\n";
		player->getCard(choice1);
		player->getCard(choice2);

		cout << "\nOpponents chosen spells:\n";
		computer->getCard(rand1);
		computer->getCard(rand2);
		cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

		//Create temps
		Card * battleTempPlayer1 = player->playCard(choice1);
		Card * battleTempPlayer2 = player->playCard(choice2);
		Card * battleTempComp1 = computer->playCard(rand1);
		Card * battleTempComp2 = computer->playCard(rand2);

		//Delete old cards from hand
		player->deleteCards(choice1, choice2);
		computer->deleteCards(rand1, rand2);

		//update hand function
		player->updateHand();
		computer->updateHand();

		//battle function called twice to find damage for each player
		int playerdmg = Battle(battleTempPlayer1, battleTempPlayer2, battleTempComp1,battleTempComp2);
		int cpudmg = Battle(battleTempComp1, battleTempComp2, battleTempPlayer1, battleTempPlayer2);
		
		//change life totals accordingly
		playerLife = playerLife - cpudmg;
		cpuLife = cpuLife - playerdmg;

		//check to see if both players are alive
		//if both players are get to zero life points in a single turn, sudden death begins
		if (playerLife <= 0 && cpuLife <= 0)
		{
			playerLife = 1;
			cpuLife = 1;
			cout << "Sudden Death!!!";
		}
		if (playerLife <= 0)
		{
			playersAlive++;
			cout << "You have been defeated. Better luck next time traveler.";
		}
		if (cpuLife <= 0)
		{
			playersAlive++;
			cout << "VICTORY! You truly are the champion wizard!";
		}

	}
	cin.ignore(2);
}
