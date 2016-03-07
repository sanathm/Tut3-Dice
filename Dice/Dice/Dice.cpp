#include "Dice.h"
#include <iostream>

using namespace std;

Dice::Dice()
{
}

int Dice::roll(){
	return (rand() % 6) + 1;
}

float Dice::average(Dice d, int n){
	int total = 0;
	for (int i = 0; i < n; i++){
		total += d.roll();
	}
	return total / n;
}

float Dice::average(int arr[], int n){
	int total = 0;
	for (int i = 0; i < n; i++){
		total += arr[i];
	}
	return total / n;
}

Dice::~Dice()
{
}
