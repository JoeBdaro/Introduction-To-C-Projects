#include <iostream>
using namespace std;

int factorial(int n);

int main()
{
	int i;
	cout << "Enter a number then press ENTER:";
	cin >> i;
	cout << endl;
	cout << "The Factorial is: (" << i << "): " << factorial(i) << " " << endl;

	system("PAUSE");
	return 0;
}
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return (n * factorial(n - 1));
}
