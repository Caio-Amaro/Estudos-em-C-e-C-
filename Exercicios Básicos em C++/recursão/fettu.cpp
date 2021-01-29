#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int consistir();
int fettu(int n1);

int main() {
	
	int n = 0;
	int n1 = 0;
	
	cout<< " Fettuccine "<<endl;
	
	n = consistir();
	
	
	cout<< " termo fettuccine eh: "<< fettu(n);
	
	return 0;
}

int consistir () {


	int n1 = 0;
	
	
	do {
		
		cout<<" entre a 1uantidade de termos "<<endl;
		cin>>n1;
		
		
		
				
	} while (n1 <= 1);
}

int fettu (int n1){
	
	
		
	if (n1 <= 1 ){
		
		return 1;
	}
	
	if ( n1 % 2 == 0) {
	
	
		return fettu(n1 - 1) - fettu(n1 - 2);
	
	}
	
	else {
		
		return fettu(n1 - 1) - fettu(n1 - 2);
	}
	
	
}	
