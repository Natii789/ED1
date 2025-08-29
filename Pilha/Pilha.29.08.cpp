/*
	ESTRUTURA DE DADOS COM ACESSO DO TIPO PILHA
		-> conceito "LIFO"
					->last in first out
		-> também chamado de PUSH-POP por acessar apenas uma extremidade denominada de TOPO
		-> aplicações:
				- compilaores
				- sistemas operacionais 
				- cálculo de expressões
				- recursividade
		->Operações Associadas 
				- Inicializar 
				- PUSH -> inserir um elemento
				- POP -> retirar e retornar
				- acesso ao elemento do TOPO, retornando-o
				- verifica se pilha cheia 
				- verifica se pilha vazia
				- exibir pilha
				
*/

#include<conio2.h>
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>

#include "pilha.h"




char MENU(){
	clrscr();
	printf("\n[A] Insere");
	printf("\n[B] Exclui");
	printf("\n[C] Verifica se esta cheia");
	printf("\n[D] Verifica se esta vazia");
	printf("\n[E] Exibir Pilha");
	return toupper(getch());
}


int main(){
	TpPilha P;
	Inicializa(P);
	
	char op;
	int elem; 
	
	do {
		op = MENU();
		switch(op){
			case 'A': 
				if(!Cheia(P.TOPO)){
					printf("\nElemento:");
					scanf("%d", &elem);
					PUSH(P, elem);
				}else
					printf("\nPilha cheia");
				getch();
				break;
			case 'B':
				if(!Vazia(P.TOPO))
					printf("%d",POP(P));
				else
					printf("\nPilha vazia");
				getch();
				break;
			case 'C':
				if(Cheia(P.TOPO)){
					printf("\nPilha cheia");
				}else
					printf("\nPilha nao cheia");
				getch();
				break;
			case 'D':
				if(Vazia(P.TOPO)){
					printf("\nPilha vazia");
				}else
					printf("\nPilha nao vazia");
				getch();
				break;
			case 'E':
				Exibe(P);
				break;
		}
		
	}while(op!=27);
}












