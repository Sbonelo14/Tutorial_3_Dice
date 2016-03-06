#ifndef DICE_Roll
#define DICE_Roll


#pragma once
class Dice_Roll_Up
{
public:
	Dice_Roll_Up()
		int roll();
	float average(Dice_Roll_Up, int);
	float average(int[], int);

	~Dice_Roll_Up();
};
#endif
