#include <iostream>
#include <string>

using namespace std;

int main() {
	//aventure of cysec
	cout << "------------------------------------\n";
	cout << "      Adventure Of Apollon       \n";
	cout << "------------------------------------\n";

	string Name = "Apollon";
	cout << "Es-tu pres a rentrer dans la matrice CySeC " << Name << "\n";

	int pillule;

	cout << "Tu dois faire un choix sois tu rentre dans la matrice sois tu arrete tout ici et je te fais tout oublier\n";
	cout << "Choisis la pillule rouge(1) et tu rentre dans la matrice choisis la pillule bleue(2) et tu oublie tout\n";
	cout << "Alors " << Name << " Fais ton choix mais relechis bien tu ne pourra pas retourner en arriere: \n";
	cin >> pillule;

	if (pillule == 1) {
		cout << "Tu as choisis de rentrer dans la matrice\n";
		cout << "Prenons cette ascenseur\n";
		cout << "Descendons tous en bas au -100 eme etage au centre de la terre la ou est la matrice\n";
		for (int i = 0; i >= -100; i--) {
			cout << i << "\n";

		}
		int choix = 0;
		cout << "Nous somme arriver tu peux sortir de l'ascenseur " << Name << "\n";
		cout << "assied toi sur se fauteuil je vais t'envoyer dans la matrice car la centre de la terre et riche en neutrons et condensera la machine pour creer une faille temporelle\n";
		cout << "appuie sur 1 pour vous asseoir, appuyer sur 2 pour partir et vous faire tuer par morpheus car vous en savez trop: \n";
		cin >> choix;
		switch (choix) {
		case 1:
			cout << "tu t'asseois\n";
			cout << "Tu rejoins la matrice bravo a bientot pour la suite\n";
			break;
		case 2:
			cout << "tu te fais tuer par morpheus\n";
			cout << "Game Over";
			break;
		default:
			cout << "Invalid Input\n";
			break;

		}
	}

	else if(pillule == 2){
		cout << "Ho Un mauvais Reve\n";
	}
	else {
		cout << "invalid input\n";
	}

	
	
}
