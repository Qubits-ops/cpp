#include <iostream>

int main() {
  int ans = 0;
  std::cout << "rentrez une annee: \n";
  std::cin >> ans;

  if(ans >= 1000 || ans <= 9999){
    std::cout << "c'est un nombre a quatre chiffre\n";
  }else{
    std::cout << "il n'est pas a quatre chiffre\n";
  }
  if(ans % 4 == 0 && ans % 100 != 0 || ans % 400 == 0){
        std::cout << ans << "\n";
        std::cout << "cette annee est bissextile\n";
      }else{
    std::cout << "cette annee n'est pas bissextile\n";
  }

  
  
}
