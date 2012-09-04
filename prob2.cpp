#include <iostream>
#include <assert.h>
using std::cout;
using std::endl;

long fib(long);

int main() {
	long sum = 0;
	for (long i = 1; fib(i) <= 4000000; i++) {
		if (fib(i)%2 == 0) {
			sum += fib(i);
		}
	}

	cout << sum << endl;

	return 0;
}

long fib(long n) {
	assert(n > 0);

	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}

	return fib(n-1) + fib(n-2);
}
