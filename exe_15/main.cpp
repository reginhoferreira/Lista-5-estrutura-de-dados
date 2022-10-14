#include <iostream>
#include <stdio.h>

using namespace std;

int quant_digitos(int numero){
	if((numero /10 ==0)){
		return 1;
	}else{
		return 1 + quant_digitos(numero/10);
	}
}

int main() {
	setlocale(LC_ALL,"Portuguese");
	int numero,aux;
	cout<<"Digite um numero inteiro \n";
	cin>>numero;
	aux = quant_digitos(numero);
	cout<<"o numero digitado tem: "<<aux<<" digitos!! "<<endl;
	
	return 0;
}
