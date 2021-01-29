#include <iostream>

using namespace std;

int consistir();
int ricci(int, int n1, int n2);
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int n = 0;
	int n1 =0;
	int n2 =0;
	
	cout<< "ricci"<<endl;
	
	n = consistir();
	n1 = consistir();
	n2 = consistir();
	
	cout<< " O valor de ricci eh: "<< ricci(n, n1, n2);
	
	return 0;
}

int consistir (){
	
	int n = 0;

	
	do {
		
		cout<< " entre com os valores "<<endl;
		cin>> n;
		
	} while (n <=0);
	
	
	return n;
}

int ricci (int n, int n1, int n2){
	
	if (n == 1){
		
		return n1;
		
	} else if (n == 2) {
	
		return n2;
	
	} else  if (n == 0){
		
		return n;
	
	} else {
	
		return ricci(n - 1, n1, n2) + ricci (n - 2, n1, n2);
		
	}
}
