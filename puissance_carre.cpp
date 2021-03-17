#include <iostream>
#include <unistd.h>

using namespace std;

double carre(double x)
{
    double resultat;
    resultat = x*x;
    return resultat;
}

double puiss(double a, double pui)
{
    double resultat = 1.0;
    int compteur(0);
    while(compteur != pui){
        resultat = resultat * a;
        compteur++;
    }
    return resultat;

}

int main()
{
    double nombre, carreNombre,puiNombre;
    cout << "Entrez un nombre: ";
    cin >> nombre;

    puiNombre = puiss(nombre,3);
    cout << puiNombre << endl;
    cout << "Calcul carre du nombre en cours sur 20:" << endl;
    for(;nombre<=20;nombre++){
        cout << "Le carre de " << nombre << " est " << carre(nombre) << endl;
        sleep(1);
    }
    return 0;
