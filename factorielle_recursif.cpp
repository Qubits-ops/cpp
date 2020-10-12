#include <iostream>
#include <cmath>

using namespace std;

int factorielle(int n)
{
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorielle(n - 1);
	}
}

int main()
{

	cout << factorielle(10);
}
