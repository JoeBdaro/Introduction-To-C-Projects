#include <iostream>
using namespace std;

int gcf(int a, int b);

int main(){
	int a = 0;
	int b = 0;

	cout << "enter a: ";
	cin >> a;
	cout << "enter b: ";
	cin >> b;
	cout << endl;

	cout << "GCF is: " << gcf(a, b) << endl;

	system("pause");
	return 0;
}

int gcf(int a, int b){
	if (b == 0)
		return a;
	else{
		return gcf(b, a%b);
	}
}