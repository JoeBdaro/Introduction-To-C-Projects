#include <iostream>
using namespace std;

int fac_func(int factorial);

int main(){
	int fac = 0;

	cout << "Please enter a number to find it's factorial, then press enter: " << endl;
	cin >> fac;

	cout << "The Factorial is: " << fac_func(fac) << endl;
	system("pause");
	return 0;
}

int fac_func(int factorial){
	int result = 1;
	for (int i = 1; i <= factorial; i++)
		cout << (result *= i) << endl;
	return result;
}