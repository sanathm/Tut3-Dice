#pragma once
class Dice
{
public:
	Dice();
	int roll();
	float average(Dice d, int n);
	float average(int arr[], int n);
	~Dice();
};

