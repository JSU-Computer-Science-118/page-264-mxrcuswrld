//Marcus K. Straughter. j00938999. 11/8/22. Page 264
//This program prompts the user to enter a positive integer between 1 and 1000 and outputs whether the number is prime.
#include <iostream>

using namespace std;

int main()
{
	const int primes[] {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};

	int chose {};

	while (chose < 1 || chose > 1000) {
		
		cin >> chose;
	}
	bool isp {true};

	for (const int p : primes)
		if (p != chose)
			if ((chose % p) == 0) {
				cout << p << '\n';
				isp = false;
			}

	if (isp)
		cout <<"Number "<< chose << " is prime!\n";
  return 0;
}
    
