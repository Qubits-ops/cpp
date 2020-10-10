#include <iostream>


using namespace std;

int main()
{
	char op;
	int n1, n2;

	cout << "\t\tvoici une mini calculette\n";
	
	cout << "choisir l'operation souhaite(*,+,/): \n";
	cin >> op;

	if (op == '+')
	{
		cout << "entrez un premier nombre: \n";
		cin >> n1;
		cout << "entrez un deuxieme nombre : \n";
		cin >> n2;
		cout << "le resultat de l'additions de " << n1 << " et " << n2 << " est: " << n1 + n2;
	}
	else if (op == '*')
	{
		cout << "entrez un premier nombre: \n";
		cin >> n1;
		cout << "entrez un deuxieme nombre : \n";
		cin >> n2;
		cout << "le resultat de la multiplication de " << n1 << " et " << n2 << " est: " << n1 * n2;
	}
	else if (op == '/')
	{
		

		cout << "entrez un premier nombre: \n";
		cin >> n1;
		cout << "entrez un deuxieme nombre : \n";
		cin >> n2;
		if (n2 == 0)
		{
			cout << "la division par 0 est impossible\n";
			return 0;
		}
		else
		{
			cout << "le resultat de la division de " << n1 << " et " << n2 << " est: " << n1 / n2;
		}
		
	}
	else
	{
		cout << " fin programme ";
	}

	return 0;

}
