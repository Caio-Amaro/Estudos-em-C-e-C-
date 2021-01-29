

using namespace std;

int main() {
	
	int num = 0;
	
	cout<< consistir();
	
	
	
	return 0;
}

int consistir (){
	
	int num = 0;
	
	cout << "Entre com o valor desejado : "<<endl;
	cin>> num;
	
	while (num % 2 == 1){
		
		cout<< " O valor informado deve ser impar, entre novamente : "<<endl
		cin>> num;
	}
}
