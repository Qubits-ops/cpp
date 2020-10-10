#include <iostream>
#include <cmath>


using namespace std;

int main()
{
	int x;
	int i;
	float racx;
	const int NB_FOIS = 7;

	cout << "vous voici sur un programme de racine carree : \n";
	cout << "Je vais vous repeter l'action: " << NB_FOIS << " fois ";

	for (i = 0; i < NB_FOIS; i++)
	{

		cout << "\n\nveuillez entrez un nombre: ";
		cin >> x;

		if (x < 0)
		{
			cout << "c'est un nombre negatif donc pas de racine carree: \n";
		}
		else if (x < 0.0)
		{
			cout << "c'est un nombre negatif donc pas de racine carree: \n";
		}
		else if (x % 2 == 0)
		{
			cout << "c'est un nombre pair et sa racine carree est de: " << sqrt(x);

		}
		else
		{
			racx = sqrt(x);
			cout << "la racine carre de " << x << " qui est un nombre impaire" << " est de " << racx;


		}

	}

	cout << "\n\nprogramme terminer la boucle a ete repeter " << NB_FOIS;
	return 0;


}