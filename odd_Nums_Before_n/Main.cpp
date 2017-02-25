//program that displays a;; the odd numbers up to n
#include <iostream>
using namespace std;

int main() {
	int n, i;

	//get number from the keyboard and initiallize i

	cout << " Enter a number and press ENTER: ";
	cin >> n;

	for (i = 1; i <= n; i = i + 2)   //   for i = 1 to,
		cout << i << " ";	   // print i

	system("pause");
	return 0;
}