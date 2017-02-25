#include <iostream>
using namespace std;

int main() {
	int i, n1, n2;

	//get number from the keyboard and initiallize n1

	cout << " Enter a number to assign to n1 and press ENTER: ";
	cin >> n1;

	//get number from the keyboard and initiallize n2

	cout << " Enter a number to assign to n2 and press ENTER: ";
	cin >> n2;

	for (i = n1; i <= n2; i++)   //   for i = 1 to,
		cout << i << " ";	   // print i

	system("pause");
	return 0;
}
