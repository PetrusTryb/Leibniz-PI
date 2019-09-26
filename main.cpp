#include <iostream>
using namespace std;
int main() {
	double pi = 1;
	long long frac = 3;
	for (long long i = 1; i <= 9999999999; i++) {
		if (i % 2 == 0) 
			pi += (double)1 / frac;
		else
			pi -= (double)1 / frac;
		frac += 2;
	}
	cout.precision(11);
	cout << pi * 4;
	return 0;
}