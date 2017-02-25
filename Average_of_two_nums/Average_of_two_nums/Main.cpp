#include <iostream>
using namespace std;

double avg(double x, double y);
//Function must be declared before being used

int main() {
	double a = 0.0;
	double b = 0.0;

	cout << "Enter first number and press ENTER: ";
	cin >> a;
	cout << "Enter second number and press ENTER: ";
	cin >> b;

	//call the function avg()
	cout << "Average is: " << avg(a, b) << endl;

	system("pause");
	return 0;
}
//average number function definition
//
double avg(double x, double y) {
	return (x + y) / 2;
}