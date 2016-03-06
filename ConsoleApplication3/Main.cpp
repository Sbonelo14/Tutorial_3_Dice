#include <iostream>
#include "Dice_Roll_Up.h"
using namespace std;
int main() {
	Dice_Roll_Up Di1, Di2;

	int Rolnum;

	cout << "Insert roll up number:" << endl;
	cin >> Rolnum;

	int *DiceRolls = new int(Rolnum);

	cout << "First Test Dice Rolls" << endl;
	cout << Di1.average(Di2, Rolnum) << endl;

	cout << "Second Test Dice Rolls"<<endl;
	cout << Di1.average(DiceRolls, Rolnum) << endl;

	delete DiceRolls;
}