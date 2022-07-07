#include <iostream>
using namespace std;

int opposite(int n);

int main() {

  int greatest = 0;

	for (int i = 100; i <= 999; i++) {

		for (int j = 100; j <= 999; j++) {

			if (i*j==opposite(i*j) and i*j > greatest)

				greatest = i*j;
		}

	}

	cout << greatest;

	return 0;
}

int opposite(int n) {

	int m = 0;

	while (n > 0) {

		m = m * 10 + n % 10;
		n = n / 10;
	}

	return m;
}
