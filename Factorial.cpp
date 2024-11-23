#include <iostream>
#include <string>
using namespace std;

int FirstFactorial(int num) {
  
  int Factorial = 1;

  for (short i = num; i >= 1; i--) {

    Factorial = Factorial * i;
  }

  return Factorial;
}

int main(void) { 
   
  // keep this function call here
  cout << FirstFactorial(8);
  return 0;
    

