#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char** argv) {

	int sum = 0;
	for (int i = 0; i < 1000; i++) {
		if (i%3 == 0 || i%5 == 0) {
			sum += i;
		}
	}

	cout << sum << endl;

	return 0;
}
