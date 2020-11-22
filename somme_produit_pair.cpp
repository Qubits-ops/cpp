#include <iostream>
#include <vector>

int main(){
  std::vector<int> pair = {2,4,3,6,1,9};
  int somme = 0;
  int somme2 = 1;

  for(int i = 0; i < pair.size() ;i++){
    if (pair[i] % 2 == 0){
      std::cout << "pair: " << pair[i] << "\n";
      somme = somme + pair[i];
      somme2 = pair[i] * somme2;
    }
  }
  std::cout << "la somme des pairs est = " << somme << "\n";
  std::cout << "le produit des pairs est = " << somme2 << "\n";
}
