#include <iostream>
#include <stdio.h>
#include <locale>
#include "main.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	setlocale(LC_ALL,"Portuguese");
	
	Pilha Pilha1, Pilha2;
	elem comp;
	elem aux;
	bool erro;
	int num;
	cout<<"informe o tamanho da pilha a ser criada: \n";
	cin>>num;
	
	create(&Pilha1);
	cout<<"Pilha criada \n";
	
	for(int i=0; i<num; i++)
	{
		cout<<"Digite o "<<i+1<<"º elemento \n";
		cin>>comp;
		
		//verifica e a pilha esta cheia
		if(IsFull(&Pilha1))
		{
			cout<<"A pilha encheu \n"; 
			
		}else
			Push(&Pilha1, &comp, &erro);
	}
		cout<<"elementos da pilha \n";
	for(int i=0; i<num; i++){
		cout<<Pilha1.itens[i]<<endl;
			
	}
		create(&Pilha2);
	while(Pilha1.topo>=0) 
	{
		Pop(&Pilha1, &erro);
		Push(&Pilha2,&X, &erro);
		
	}
	
	//invertendo a pilha
	cout<<" pilha invertida: "<<endl;
	for(int i=0; i<num; i++){
		cout<<Pilha2.itens[i]<<endl;	
	}
	
	
	
	

	
	
	return 0;
}
