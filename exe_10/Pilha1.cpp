#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	elem comp;
	bool erro;
	int media,num,soma=0;
	int maior= -999;
	int menor= 999;
	Pilha Pilha1;
	cout<<"Quantos elementos terá sua Pilha? \n";
	cin >>num;
	
	//criando a pilha 
	create(&Pilha1);
	for(int i=0; i<num; i++)
	{
		cout<<"digite o "<<i+1<<"º elemento \n";
		cin>>comp;
		Push(&Pilha1, &comp, &erro);
	}
	
	//imprimindo a pilha
	cout <<" Elementos da Pilha: "<<endl;
	for(int i=0; i<num; i++){
		cout<<Pilha1.itens[i]<<endl;
	}
	
	
	//encontrando maior/menor e média da pilha 
	while(!IsEmpty(&Pilha1))
	{
		Pop(&Pilha1,&erro);
		soma= soma + X;
		media= soma/num;	
		if( X > maior)
			maior = X;
		if(X < menor)
			menor = X;
	
	
	}
	cout<<"A média do numeros é igual á: "<<media<<endl;
	cout<<"Maior numero dentro da pilha : "<<maior<<endl;
	cout<<"Menor numero dentro da pilha : "<<menor<<endl;
	


	
	
	return 0;
}
