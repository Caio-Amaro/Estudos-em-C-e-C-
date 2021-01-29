#include <iostream>

#include<locale>
using namespace std;






/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int nota1 = 0;
	int nota2 = 0;
	int nota3 = 0;
	
	int cont = 0;
	float media = 0;
	float mediaglobal = 0;
	
	
	cout<< " Nota dos alunos " << endl;
	
	while (cont < 3 ) {
		
		cout<< " Entre com a nota 1 : " << endl;
		cin>> nota1;
		
		cout<< " Entre com a nota 1 : " << endl;
		cin>> nota2;
		
		cout<< " Entre com a nota 1 : " << endl;
		cin>> nota3;
		
		media = ( (nota1*2 )+ (nota2*4) + (nota3*3 ) / 10);
		
			if (media >= 44 ) {
				
				cout<< " AQ média é : "<< media <<endl;
				cout<< " Aluno " << cont << " APROVADO "<<endl;
				
			} else {
				
				cout<< " AQ média é : "<< media << endl;
				cout<< " Aluno " << cont << " REPROVADO "<<endl;
			}
			
		cont = cont + 1;
		mediaglobal = media + mediaglobal;
		
	}
		
		mediaglobal = mediaglobal / 3;	
		
		cout<< " A media global é " << mediaglobal <<endl;
	
	return 0;
}
