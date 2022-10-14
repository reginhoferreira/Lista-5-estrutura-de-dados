#include <iostream>
#define TAM_PILHA 10

using namespace std;

typedef int elem;
typedef struct{
	int topo;
	elem itens[TAM_PILHA];
}Pilha;

void Create (Pilha *P);
void Push(Pilha *P, elem *X,bool *erro);
void Pop(Pilha *P, bool *erro);
bool IsFull(Pilha *P);
bool IsEmpty(Pilha *P);
void Empty(Pilha *P);


void create(Pilha *P)
{
	P->topo= -1;
}

bool IsFull(Pilha *P)
{
	if(P->topo==TAM_PILHA-1)
	{
		return true;
	}else{
		return false;
	}
}

void Push(Pilha *P, elem *X, bool *erro)
{
	if(!IsFull(P))
	{
		P->topo++;
		P->itens[P->topo] = *X;
		*erro = false;
	}else
	{
		*erro = true;
	}	
}
void Empty(Pilha *P)
{
	for(; P->topo>=0; P->topo--)
	{
		P->topo = -1;
	}
}

bool IsEmpty(Pilha *P)
{
	if(P->topo==-1)
		return true;
	return false;
}

elem X;
void Pop(Pilha *P, bool *erro)
{
	if(!IsEmpty(P)){
		X = P->itens[P->topo];
		P->topo--;
		*erro = false;
	}else{
		*erro = true;
	}
}
