#include <iostream>
using namespace std;

int main() {
	int num;
	cout << "inserire numero: ";
	if (!(cin >> num)) return 0;

	if (num < -5 || num > 10) {
		cout << "il dato è fuori dall'intervallo" << endl;
	} else {
		cout << "il dato è nell'intervallo" << endl;
	}

	return 0;
}