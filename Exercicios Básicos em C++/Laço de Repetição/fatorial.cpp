#include<locale>
using namespace std;




/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {

	setlocale(LC_ALL, "Portuguese");
	
	int num1 = 0;
	int num2 = 0;
	int qtda = 0;
	int valortermo = 0;
	int cont = 3;
	
	cout<< " primeiro termo : ";
	cin>> num1;
	cout<< " segundo termo : "<<endl;
	cin>> num2;
	cout<< " quantidade termo : "<<endl;
	cin>> qtda;
	
	while (cont <= qtda){
		
		if (cont % 2 == 0) {
			
			valortermo = num1 - num2;
		}

		else {
			
			valortermo = num2 + num2;
		}
		
		
		cout<< " termo é : " << qtda << " valor é : " << valortermo << endl;
		num2 = num1;
		num2 = valortermo;
		cont=cont+1;
		
	}

	return 0;
}
