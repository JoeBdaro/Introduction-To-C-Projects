#include <iostream>
#include <cmath>
using namespace std;

void primefact(int n);

int main(){
	int user_num;

	while (true){
		cout << "Please enter a number to gain the prime factorization of it, enter 0 to exit: ";
		cin >> user_num;

		if (user_num == 0){
			break;
		}

		primefact(user_num);
		cout << endl;
	}

	system("pause");
	return 0;
}
void primefact(int n){
	int i;
	int sqrt_n = sqrt(n);

	for (i = 2; i <= sqrt_n; i++)
		if (n % i == 0){
			cout << i << ", ";
			primefact(n / i);
			return;
		}
	cout << n;
	return;
}
