#include "fib.hpp"

void FIB() {
	int n, a = 0, b = 1, nextTerm = 0 ;

	cout << "Enter the number of terms: ";
	cin >> n;


	for (int i = 1; i <= n; i++) {
		if(i == 0) {
			cout << a << ", ";
						
		}
		if(i == 1) {
			cout << b << ", ";
		
		}
		nextTerm = a + b;
		a = b;
		b = nextTerm;

		cout << nextTerm <<", ";

	}
}
