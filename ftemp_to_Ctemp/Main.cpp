#include <iostream>
using namespace std;


int main()
{
	double ftemp;    //fahrenheit temperature

	//Prompt and and input value of ftemp

	cout << "Input a fahrenheit temperature and press ENTER: ";
	cin >> ftemp;

	//convert ftemp and output results.

	cout << "Celsius temperature is: " << (ftemp - 32) / 1.8;
	cout << endl;

	system("pause");
	return 0;
}