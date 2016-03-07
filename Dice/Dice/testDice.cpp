#include <iostream>
#include "Dice.h"

using namespace std;

int main(){
	Dice x = Dice();
	int a[100];
	for (int i = 0; i < 10; i++){
		cout << "The dice shows: " << x.roll() << endl;
	}
	cout << endl;
	for (int i = 0; i < 100; i++){
		a[i] = (rand() % 10) + 10;
	}
	cout << "Dice average: " << x.average(x, 100) << endl;
	cout << "Int average: " << x.average(a, 100) << endl;
}