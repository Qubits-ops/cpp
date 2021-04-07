#include <iostream>
#include <vector>


using namespace std;

void fstring(vector<char> texte){
    int compteur = 0;
    while (texte.size() > 0){
            cout << texte[compteur];
            compteur++;
            texte.pop_back();

    }


}

int main()
{
    cout << "Hello World !" << endl;
    vector<char> aff;
    aff.push_back('s');
    aff.push_back('a');
    aff.push_back('l');
    aff.push_back('u');
    aff.push_back('t');
    fstring(aff);
    
    return 0;
}
