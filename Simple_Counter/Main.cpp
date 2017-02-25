
#include <iostream>
using namespace std;

void print_out(int num);
int counter(int count);

int main(){
	int n;

	cout << "please enter a number to count to, then press enter: " << endl;
	cin >> n;

	print_out(n);
	system("pause");
	return 0;
}

void print_out(int num){
	cout << "The counters are: " << counter(num);
	return;
}

int counter(int count){
	int i;
	for (i = 0; i <= count; i++)
		cout << i << " " << endl;
	return i;
}