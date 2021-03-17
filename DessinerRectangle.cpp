void dessineRectangle(int l,int h,char symbole)
{
    if(l < 0 && h < 0)
    {
        cout << "ERREUR,vous avez choisis des valeurs negatives" << endl;
    }
    for(int ligne(0);ligne < h; ligne++)
    {
        for(int colonne(0);colonne < l; colonne++){
            cout << symbole;
        }
        cout << endl;
    }
}
int main()
{
    int largeur, hauteur;
    char symbole;
    cout << "Largeur du rectangle: ";
    cin >> largeur;
    cout << "Hauteur du rectangle: ";
    cin >> hauteur;
    cout << "Symbole a utiliser: ";
    cin >> symbole;

    dessineRectangle(largeur, hauteur,symbole);
    return 0;

}
