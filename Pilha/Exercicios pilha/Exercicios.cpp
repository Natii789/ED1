#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio2.h>

#define MAX
#include pilha.h


//1.	Ao receber duas Pilhas, retorne a concatena��o das mesmas na primeira Pilha.

void ConcatenPilhas(TpPilha &p1, TpPilha &p2){
	TpPilha aux;
	Inicializa(aux);
	while(!Cheia(aux)){
		Push(aux, Pop(p2));
	}
	while(!Cheia(p1)){
		Push(p1, Pop(p2));
	}
	Exibe(p1);
}

//2.	Fa�a uma fun��o que possibilite a exclus�o de um elemento qualquer da Pilha escolhido pelo Usu�rio.

void ExcluiQualquerElemento(TpPilha &p, int elem){
	TpPilha aux;
	Inicializa(aux);
	while(p.pilha[topo] != elem && !Vazia(p))
		Push(aux, Pop(p));
	if(p.pilha[topo] == elem && !Vazia(p)){
		p.pilha[p.topo--];
		while(!Vazia(aux))
			Push(p, Pop(aux));
	}
}





int main(){
}
