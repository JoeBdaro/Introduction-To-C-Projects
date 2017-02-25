#include <iostream>
using namespace std;

int main() {
	double ctemp;    //celsius temperature

	//Prompt and input value of ctemp

	cout << "Input a celsius temperature and press ENTER: ";
	cin >> ctemp;

	//Convert ctemp and output result

	cout << "The fahrenheit temperature is: " << (ctemp * 1.8) + 32 << endl;

	system("pause");
	return 0;
}