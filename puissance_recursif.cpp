#include <iostream>


using namespace std;


int puissance(int n,int x)
{
	if (x == 1) {
		return x;
	}
	else {
		return n * puissance(n, x - 1);
	}
}
int main()
{

	cout << puissance(10, 5);
}
