#include <iostream>

int main(){
  //Brain explodes here:
  for(int i = 0; i <= 100;i++){
    if(i % 15 == 0){
      std::cout << "FIZZBUZZ\n";

    }
    else if(i % 5 == 0){
      std::cout << "BUZZ\n";
    }
    else if(i % 3 == 0){
      std::cout << "FIZZ\n";
    } 
    else{
      std::cout << i << "\n";
    }
  }
}
