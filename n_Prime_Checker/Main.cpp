#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int n;   //number to test for prime-ness
	int i;   //loop counter
	int is_prime = true;   //boolean flag...
	// Assume true for now.

	//get a number from the keyboard.

	cout << "Enter a number and press ENTER: ";
	cin >> n;

	// test for prime by checking for divisibility by all whole numbers from 2 to sqrt(n)

	i = 2;
	while (i <= sqrt(n)) {   //while i is <= sqrt(n)
		if (n % i == 0) {      //If i divides n,
			is_prime = false;  //n is not prime .
			break;
		}
		i++;                     //add 1 to i
	}

	// print results

	if (is_prime)
		cout << "Number is prime." << endl;
	else
		cout << "Number is not prime." << endl;

	system("pause");
	return 0;
}