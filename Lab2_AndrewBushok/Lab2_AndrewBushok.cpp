// Lab2_AndrewBushok.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

int main()
{
	float A;
	float B;
	float X;

	cout << "Hello, my name is Andrew and I'm going to solve for x" << endl;
	cout << "Today's equation is Ax + B = 0";

	cout << "Enter a value for A: ";
	cin >> A;
	
	cout << "Enter a value for B: ";
	cin >> B;
	
	X = (0 - B) / A;

	cout << "The answer is x = " << X << endl;
}
