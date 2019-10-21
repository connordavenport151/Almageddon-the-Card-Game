//The purpose of this is to compare the cards of each player and see how much damage
//the player who this function is called on will take

//Refer to the powerpoint to see which spells are each of the cases in the switch statements

#include "Battle.h"
#include "Card.h"


int Battle(Card* card1, Card* card2, Card* cpu1, Card* cpu2)
{
	int damage = 0;
	int quit = 0;
	int quit2 = 0;
	switch (card1->getValue()) //checks card 1 will both enemy cards
	{
	case 1: //fireblast
		
		switch (cpu1->getValue())
		{
		case 2:
			quit++;
			break;
		case 5:
			quit++;
			break;
		case 7:
			quit++;
			break;
		case 8:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 2:
			break;
		case 5:
			break;
		case 7:
			break;
		case 8:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 2: //Hydroblast 
		
		switch (cpu1->getValue())
		{
		case 4:
			quit++;
			break;
		case 6:
			quit++;
			break;
		case 7:
			quit++;
			break;
		case 10:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		case 10:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 3: //Rockslide 
		
		switch (cpu1->getValue())
		{
		case 1:
			quit++;
			break;
		case 6:
			quit++;
			break;
		case 8:
			quit++;
			break;
		case 9:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 1:
			break;
		case 6:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 4: //Gust 
		
		switch (cpu1->getValue())
		{
		case 3:
			quit++;
			break;
		case 5:
			quit++;
			break;
		case 9:
			quit++;
			break;
		case 10:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 3:
			break;
		case 5:
			break;
		case 9:
			break;
		case 10:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 5: //Ice Beam
		
		switch (cpu1->getValue())
		{
		case 4:
			quit++;
			break;
		case 6:
			quit++;
			break;
		case 7:
			quit++;
			break;
		case 10:
			quit++;
			break;
		case 1:
			quit++;
			break;
		case 8:
			quit++;
			break;
		case 9:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		case 10:
			break;
		case 1:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 6: //Lightning Strike
		
		switch (cpu1->getValue())
		{
		case 2:
			quit++;
			break;
		case 5:
			quit++;
			break;
		case 7:
			quit++;
			break;
		case 8:
			quit++;
			break;
		case 3:
			quit++;
			break;
		case 9:
			quit++;
			break;
		case 10:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 2:
			break;
		case 5:
			break;
		case 7:
			break;
		case 8:
			break;
		case 3:
			break;
		case 9:
			break;
		case 10:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 7: //Typhoon 
		
		switch (cpu1->getValue())
		{
		case 3:
			quit++;
			break;
		case 5:
			quit++;
			break;
		case 9:
			quit++;
			break;
		case 10:
			quit++;
			break;
		case 4:
			quit++;
			break;
		case 6:
			quit++;
			break;
		case 7:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 3:
			break;
		case 5:
			break;
		case 9:
			break;
		case 10:
			break;
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 8: //Steam Blast
		
		switch (cpu1->getValue())
		{
		case 4:
			quit++;
			break;
		case 6:
			quit++;
			break;
		case 7:
			quit++;
			break;
		case 10:
			quit++;
			break;
		case 2:
			quit++;
			break;
		case 5:
			quit++;
			break;
		case 8:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		case 10:
			break;
		case 2:
			break;
		case 5:
			break;
		case 8:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 9: //Lava Burst
		
		switch (cpu1->getValue())
		{
		case 1:
			quit++;
			break;
		case 6:
			quit++;
			break;
		case 8:
			quit++;
			break;
		case 9:
			quit++;
			break;
		case 2:
			quit++;
			break;
		case 5:
			quit++;
			break;
		case 7:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 1:
			break;
		case 6:
			break;
		case 8:
			break;
		case 9:
			break;
		case 2:
			break;
		case 5:
			break;
		case 7:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 10: //Tornado 
		
		switch (cpu1->getValue())
		{
		case 1:
			quit++;
			break;
		case 6:
			quit++;
			break;
		case 8:
			quit++;
			break;
		case 9:
			quit++;
			break;
		case 3:
			quit++;
			break;
		case 5:
			quit++;
			break;
		case 10:
			quit++;
			break;
		default:
			break;
		}
		if (quit == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 1:
			break;
		case 6:
			break;
		case 8:
			break;
		case 9:
			break;
		case 3:
			break;
		case 5:
			break;
		case 10:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	}
	switch (card2->getValue()) //checks card 2 will both enemy cards
	{
	case 1: //fireblast
		
		switch (cpu1->getValue())
		{
		case 2:
			quit2++;
			break;
		case 5:
			quit2++;
			break;
		case 7:
			quit2++;
			break;
		case 8:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 2:
			break;
		case 5:
			break;
		case 7:
			break;
		case 8:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 2: //Hydroblast 
		
		switch (cpu1->getValue())
		{
		case 4:
			quit2++;
			break;
		case 6:
			quit2++;
			break;
		case 7:
			quit2++;
			break;
		case 10:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		case 10:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 3: //Rockslide 
		
		switch (cpu1->getValue())
		{
		case 1:
			quit2++;
			break;
		case 6:
			quit2++;
			break;
		case 8:
			quit2++;
			break;
		case 9:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 1:
			break;
		case 6:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 4: //Gust 
		
		switch (cpu1->getValue())
		{
		case 3:
			quit2++;
			break;
		case 5:
			quit2++;
			break;
		case 9:
			quit2++;
			break;
		case 10:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 3:
			break;
		case 5:
			break;
		case 9:
			break;
		case 10:
			break;
		default:
			damage++;
			break;
		}
		break;
	case 5: //Ice Beam
		
		switch (cpu1->getValue())
		{
		case 4:
			quit2++;
			break;
		case 6:
			quit2++;
			break;
		case 7:
			quit2++;
			break;
		case 10:
			quit2++;
			break;
		case 1:
			quit2++;
			break;
		case 8:
			quit2++;
			break;
		case 9:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		case 10:
			break;
		case 1:
			break;
		case 8:
			break;
		case 9:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 6: //Lightning Strike
		
		switch (cpu1->getValue())
		{
		case 2:
			quit2++;
			break;
		case 5:
			quit2++;
			break;
		case 7:
			quit2++;
			break;
		case 8:
			quit2++;
			break;
		case 3:
			quit2++;
			break;
		case 9:
			quit2++;
			break;
		case 10:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 2:
			break;
		case 5:
			break;
		case 7:
			break;
		case 8:
			break;
		case 3:
			break;
		case 9:
			break;
		case 10:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 7: //Typhoon 
		
		switch (cpu1->getValue())
		{
		case 3:
			quit2++;
			break;
		case 5:
			quit2++;
			break;
		case 9:
			quit2++;
			break;
		case 10:
			quit2++;
			break;
		case 4:
			quit2++;
			break;
		case 6:
			quit2++;
			break;
		case 7:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 3:
			break;
		case 5:
			break;
		case 9:
			break;
		case 10:
			break;
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 8: //Steam Blast
		
		switch (cpu1->getValue())
		{
		case 4:
			quit2++;
			break;
		case 6:
			quit2++;
			break;
		case 7:
			quit2++;
			break;
		case 10:
			quit2++;
			break;
		case 2:
			quit2++;
			break;
		case 5:
			quit2++;
			break;
		case 8:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 4:
			break;
		case 6:
			break;
		case 7:
			break;
		case 10:
			break;
		case 2:
			break;
		case 5:
			break;
		case 8:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 9: //Lava Burst
		
		switch (cpu1->getValue())
		{
		case 1:
			quit2++;
			break;
		case 6:
			quit2++;
			break;
		case 8:
			quit2++;
			break;
		case 9:
			quit2++;
			break;
		case 2:
			quit2++;
			break;
		case 5:
			quit2++;
			break;
		case 7:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 1:
			break;
		case 6:
			break;
		case 8:
			break;
		case 9:
			break;
		case 2:
			break;
		case 5:
			break;
		case 7:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	case 10: //Tornado 
		
		switch (cpu1->getValue())
		{
		case 1:
			quit2++;
			break;
		case 6:
			quit2++;
			break;
		case 8:
			quit2++;
			break;
		case 9:
			quit2++;
			break;
		case 3:
			quit2++;
			break;
		case 5:
			quit2++;
			break;
		case 10:
			quit2++;
			break;
		default:
			break;
		}
		if (quit2 == 1)
		{
			break;
		}
		switch (cpu2->getValue())
		{
		case 1:
			break;
		case 6:
			break;
		case 8:
			break;
		case 9:
			break;
		case 3:
			break;
		case 5:
			break;
		case 10:
			break;
		default:
			damage += 2;
			break;
		}
		break;
	}
	return damage;
}
	