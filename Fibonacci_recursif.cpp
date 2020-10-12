#include <iostream>


using namespace std;


int fibo(int n)
{
	if (n < 2)
	{
		return n;
	}
	else {
		return fibo(n - 1) + fibo(n - 2);
	}
}
int main()
{

	cout << fibo(10);
}
