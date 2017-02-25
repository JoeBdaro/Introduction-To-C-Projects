#include <iostream>
using namespace std;

//Functions must be declared before being used

void print_results(double a, double b);
double avg(double x, double y);

int main() {
	double a = 0.0;
	double b = 0.0;

	cout << "Enter first number and press ENTER: ";
	cin >> a;
	cout << "Enter second number and press ENTER: ";
	cin >> b;

	//call the function pr_results().
	print_results(a, b);

	system("pause");
	return 0;
}

//print_results function definition
//
void print_results(double a, double b) {
	cout << "Average is: " << avg(a, b) << endl;
}

//average-number function definition
//
double avg(double x, double y) {
	return (x + y) / 2;
}