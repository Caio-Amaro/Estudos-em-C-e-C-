#include <iostream>


using namespace std;

int binario (int n, int pot, int bin);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


int main() {
  int n,pot,bin;

  cout << endl << "  Digite o Numero: ";
  cin >> n;
  pot = 1;
  bin = 0;
  bin = binario(n, pot, bin);

  cout << "  " << "Result: " << bin;
  cin.get();
  return 0;
}


int binario(int n, int pot, int bin) {
	
  bin = bin + (n % 2)*pot;
  n = n/2;
  pot = pot *10;
  
  if (n <= 0) {
    return bin;
  }
  
  bin = binario(n, pot, bin);
}
