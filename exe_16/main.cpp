#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Soma(int vetor[], int num)
{
	if(num==0)
		return 0;
	else
	return vetor[num -1] + Soma(vetor, num - 1);
}


int main() {
	setlocale(LC_ALL,"Portuguese");
	
	int *vetor,soma_elem;
	int num;
	cout<<"Digite quantos numeros irá somar: \n";
	cin >>num;
	
	vetor = (int*) malloc(num *sizeof(int));
	
	for(int i=0; i<num; i++)
	{
		cout<<"Digite o "<<i+1<<"º elemento \n";
		cin>>vetor[i];
		cout<<endl;
	}
	
	soma_elem = Soma(vetor,num);
	cout<<"A soma dos elementos é igual a: "<<soma_elem<<endl;
	
	return 0;
}
