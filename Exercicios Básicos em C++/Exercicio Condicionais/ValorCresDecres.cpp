#include <iostream>
#include<stdio.h>
#include<stdlib.h>
#include<locale>
#include <string>
#include <sstream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	setlocale(LC_ALL, "Portugues");
	
	int num1 = 0;
	int num2 = 0;
	
	
	cout << " Calcular Dois Valores Inteiros ";
	cout << endl;
	
	cint >> num1;
	cint >> num2;
	
	if (num1 > num2) {
	
		cout<< "O valor crescente é : " << num1 << num2 << endl;
		cout<< "O valor decrescente é : "<< num2 << num1 << endl;
		
		else {
			
			cout<< "O valor crescente é : " << num2 << num1 << endl;
			cout<< "O valor decrescente é : "<< num1 << num2 << endl;
			
		}
	}
	
	
	
	
	
}
