#include <iostream>
#include <string.h>

bool is_palindrome(std::string text){
  std::string reversed = "";
  for(int i = text.size()-1;i>=0;i--){
    reversed += text[i];
  }
  if(reversed == text){
    return true;
  }else{
    return false;
  }

}


int main() {
  
  std::cout << is_palindrome("Qubit") << "\n";
  std::cout << is_palindrome("Sheldon") << "\n";
  std::cout << is_palindrome("kayak") << "\n";
  
}
