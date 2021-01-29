#include <iostream>
#include<locale>
using namespace std;

int funcao (int n, int pot, int bin);

int main() {
  
  int n,pot,bin;

  cout << endl << "  Digite o Numero: ";
  cin >> n;
  pot = 1;
  bin = 0;
  
  bin = funcao(n, pot, bin);

  cout << "  " << "Result: " << bin;
  cin.get();
  return 0;
}


int funcao(int n, int pot, int bin) {
  
  int n = 0; 
  int pot = 0;
  int bin = 0;
  
  bin += (n % 2)* pot;
  n = n/2;
  pot = pot *10;
  
  if (n <= 0) {
  
    return bin;
  }
  
  bin = funcao(n, pot, bin);
}
