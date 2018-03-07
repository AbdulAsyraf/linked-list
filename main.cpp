#include <iostream>
#include <time.h>
#include <stdlib.h>
#include "linkedlist.h"
using namespace std;

int main()
{
	int target, location, num;
	List<int> x;

	srand(time(NULL));
	
	for (int i = 0; i<20; i++)
	{
		num = 1 + (rand() % 200);
		x.AddToFrontRandom(num);
	}

	cout << "\nNumber of Item now : " << x.NumberOfItem();
	cout << "\nThe list are : " << endl;
	x.PrintData();
	cout << "\nEnter the search item : ";
	cin >> target;

	if (x.Traverse(target, location) == true)
		cout << "Item is found at location index : " << location << endl;
	else
		cout << "Item not found\n\n";

	cin.ignore();
	cin.get();
	return 0;
}