#include <iostream>
#include <stdio.h>
#include <cstdlib>
#include <locale>
#include "main.h"
using namespace std;



int main() {
	setlocale(LC_ALL,"Portuguese");
	
	Pilha Pilha_P, Pilha_P2;
	elem comp,comp2;
	bool erro;

	int num,num2;
	int itens[TAM_PILHA];
	cout<<"Digite o tamanho da Pilha 1: \n";
	cin>>num;
	
	//Criando a pilha 1
	create(&Pilha_P);
	cout<<"Pilha 1 criada \n";
	
	for(int i=0; i<num; i++)
	{
		cout<<"Digite o "<<i+1<<"º elemento: \n";
		cin>>comp;
		Push(&Pilha_P,&comp, &erro);	
	}
	
	//Imprimindo a Pilha 1
	
	cout<<" Pilha 1: \n";
	for(int i=0; i<num; i++)
	{
		cout<<Pilha_P.itens[i]<<endl;
	
	}

	
	//Criando a Pilha 2
	cout<<"Digite o tamanho da Pilha 2 \n";
	cin >>num2;
	
	create(&Pilha_P2);
	
	cout<<"Pilha 2 criada! \n"<<endl;
	for(int i=0; i<num2; i++)
	{
		cout<<"Digite o "<<i+1<<"º elemento: "<<endl;
		cin >>comp2;
		Push(&Pilha_P2, &comp2,&erro);
	}
	
	//Imprimindo Pilha 2
	cout<<"PILHA 2 \n";
	for(int i=0; i<num2; i++)
	{
		cout<<Pilha_P2.itens[i]<<endl;
	}
	
//verificando a igualdade dos elementos
	for(int i=0; i<1; i++)
	{
		for(int j=0; j<1; j++)
		{
			if(Pilha_P.itens[i] ==Pilha_P2.itens[j])
			{
				cout<<"As pilhas tem os mesmos conteúdo! \n";
				
			}else{
				cout<<"As Pilhas 1 e 2 tem conteúdos diferentes! \n";
			}
		}
			
				
	}
		
	return 0;
}
