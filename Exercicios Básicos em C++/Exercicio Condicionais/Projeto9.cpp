#include <iostream>
#include<locale>
using namespace std;





/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portuguese");
	
	int segundo = 0;
	int minuto = 0;
	int hora = 0;
	
	cout<< "Vamos calcular quantos minutos e horas tem certa quantidade de segundo "<<endl<<endl;
	
	cout<< "Entre com a quantidade de segundos que pretende calcular .: "<<endl;
	cin>>segundo;
	
	minuto = segundo / 60;
	
	hora = minuto / 60;
	
	
	
	cout<< " O valor de .: " << segundo<<" Segundos"<< " corresponde a .: " << endl<<endl;
	cout<< minuto<<" minutos"<<endl<<endl;
	cout<< hora<<" horas";
	
	
	
	return 0;
}
