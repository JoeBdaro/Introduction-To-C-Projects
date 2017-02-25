#include <iostream>
#include <cmath>
using namespace std;
double x, y;
double number[500];

int n, i, m;

int main()
{

	//Input how many numbers you would like to calculate.

	cout << "How many numbers would you like to calculate." << endl;
	cin >> n;

	//Checks if the number (n) inputed was positive.
	while (n < 0)
	{
		cout << "The number you chose was not positive, input must be a positive number" << endl;
		cout << "Please type in a positive number. ";
		cin >> n;
	}

	//Input the numbers that you want to calculate

	cout << "Enter " << n << " numbers. " << endl;
	for (i = 0; i < n; i++)
	{
		cin >> number[i];
	}

	// Decides whether the user wants to select sum or average

	cout << "Enter 1 if you want the sum or 2 if you want the average: ";
	cin >> m;
	while (m < 1 || m >2)
	{
		cout << "The number you have entered is not a valid choise, input must be either 1 or 2. ";
		cout << " Please enter 1 for the sum, or 2 for the average: ";
		cin >> m;
	}

	//Printing the choise of the user (sum or average).

	if (m == 1)
	{
		x = 0;
		for (i = 0; i < n; i++)

			x = x + number[i];
		cout << "The sum of the " << n << " number is: " << x << endl;
	}
	if (m == 2)
	{
		x = 0;
		for (i = 0; i < n; i++)

			x = x + number[i];
		y = x / n;
		cout << "The average of the  " << n << " number is: " << y << endl;
	}

	system("PAUSE");
	return 0;
}