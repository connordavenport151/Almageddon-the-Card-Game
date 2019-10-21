#pragma once
//function that prints out the rules of the game
#include <string>
#include <iostream>
using namespace std;

void Rules()
{
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
	cout << "~*Rules*												    ~\n";
	cout << "~Defense chart:												    ~\n";
	cout << "~Water defends against -> Fire defends against -> Earth defends against -> Wind defends against -> Water~\n";
	cout << "~*Effective defense types negate the opposing damage*								~\n";
	cout << "~Card Types and Damages: 											~\n";
	cout << "~Fireball (1pt. fire damage)										    ~\n";
	cout << "~Hydeoblast (1pt. water damage)										    ~\n";
	cout << "~Rockslide (1pt. earth damage)										    ~\n";
	cout << "~Gust (1pt. wind damage)										    ~\n";
	cout << "~Ice Beam (1pt. water/1pt. earth damage)							   	    ~\n";
	cout << "~Lightning Strike (1pt. fire/1pt. wind damage)								    ~\n";
	cout << "~Typhoon (1pt. wind/1pt. water damage)									    ~\n";
	cout << "~Steam Blast (1pt. water/1pt. fire damage)									~\n";
	cout << "~Lava Burst (1pt. earth/1pt. fire damage)									~\n";
	cout << "~Tornado (1pt. fire/1pt. wind damage)								        ~\n";
	cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";

}