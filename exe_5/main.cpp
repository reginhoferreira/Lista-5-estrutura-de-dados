#include <iostream>
#include <locale>
#include <stdio.h>
#include "main.h"

using namespace std;

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	bool erro;
	elem comp;
	int num =20;
	Pilha Pilha1, Pilha2, Pilha3;

	create(&Pilha1);
	create(&Pilha2);
	create(&Pilha3);
	
	cout<<"Pilhas criadas \n";
	
	cout<<"digite 20 numeros inteiros positivos ou negativos: \n";
	for(int i=0; i<num; i++){
		cout<<"Digite o "<<i+1<<"º elemento: \n";
		cin>>comp;
		if(comp%2==0 && comp >=0)
		{
			Push(&Pilha1, &comp, &erro);
			
		}else if(comp%2!=0 && comp>0)
		{
			Push(&Pilha2, &comp, &erro);
		}else
		{
			Push(&Pilha3, &comp, &erro);
		}
	}
	
	//Imprimindo pilha 1
	
	cout<<"Pilha 1!!"<<endl;
	for(int i=Pilha1.topo; i>=0; i--)
	{
		cout<<Pilha1.itens[i]<<endl;
	}
	
	//Imprimindo pilha 2
	
	cout<<"Pilha 2 !!"<<endl;
	for(int i=Pilha2.topo; i>=0; i--)
	{
		cout<<Pilha2.itens[i]<<endl;
	}
	
	//Imprimindo pilha 3
	
	cout<<"Pilha 3 !!"<<endl;
	for(int i=Pilha3.topo; i>=0; i--)
	{
		cout<<Pilha3.itens[i]<<endl;
	}
	
	return 0;
}
