#include <iostream>
#include <vector>
#include <string>

int main() {
  
  std::string input = "Bonjour maitre";

  std::vector<char> voyelles = {'a','e','i','o','u'};

  std::vector<char> whale_talk;

  for (int i = 0; i < input.size(); i++) {
    
    for (int j = 0; j < voyelles.size(); j++) {

      if (input[i] == voyelles[j]) {

        whale_talk.push_back(input[i]);
       
        if (input[i] == 'e' || input [i] == 'u') {

        whale_talk.push_back(input[i]);
        
        }
      
      }
      
    }
  
  }
  
  for (int k = 0; k < whale_talk.size(); k++) {
    
    std::cout << whale_talk[k];
    
  }
  
  std::cout << "\n";
  
}
