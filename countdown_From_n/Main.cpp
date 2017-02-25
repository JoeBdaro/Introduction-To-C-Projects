//Program that counts down from n down to 1
#include <iostream>
using namespace std;

int main() {
	int i, n;

	//get number from the keyboard and initiallize n

	cout << " Enter a number to assign to n and press ENTER: ";
	cin >> n;

	for (i = n; i >= 1; i--)   //   for i = 1 to,
		cout << i << " ";	   // print i

	system("pause");
	return 0;
}