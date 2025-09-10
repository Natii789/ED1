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

void ExcluiQualquerElemento(TpPilha &p, char elem){
	TpPilha aux;
	Inicializa(aux);
	while(p.pilha[topo] != elem && !Vazia(p))
		Push(aux, Pop(p));
	if(p.pilha[topo] == elem && !Vazia(p))
		printf("Numero retirado: %c", p.pilha[p.topo--]);
	while(!Vazia(aux))
			Push(p, Pop(aux));
	Exibe(p);
}



/*3.	Implemente uma fun��o que retorne o resultado de qualquer express�o p�s-fixada (Polonesa) recebida por par�metro em uma string. 
		Considerando que os operandos ter�o apenas 1 d�gito. A express�o abaixo na forma infixa � a seguinte: (1+2)*(4-5).				*/

void Polonesa(TpPilha &p){
	
}



/*4.	Simule a utiliza��o de 'n' Pilhas conforme a necessidade do Usu�rio. 
		As opera��es de inser��o (PUSH) e retirada (POP), e em qual Pilha dever�o agir, devem ser definidas por sorteio.				*/

void (){
}



//5.	Elaborar um m�dulo em C que ao receber um vetor de n�meros inteiros e seu tamanho l�gico, exiba-o de modo que seus elementos apare�am de forma inversa

void (){
}



//6.	Fa�a um m�dulo que receba, via par�metro, um arquivo texto e retorne um novo arquivo com o conte�do totalmente invertido. Utilize uma Pilha como estrutura para aux�lio ao processo.

void (){
}



//7.	Escreva uma fun��o que ao receber uma palavra, retorne se a mesma � pal�ndromo ou n�o.

void (){
}



/*8.	Elabore um algoritmo que mova tr�s discos de uma Torre de Han�i, que consiste em tr�s hastes (a - b - c), uma das quais serve de suporte para, por exemplo, 
		3 discos de tamanhos diferentes (1 -2 - 3), os menores sobre os maiores. 
		Pode-se mover um disco de cada vez para qualquer haste contanto que nunca seja co1.	locado um disco maior sobre o menor. 
		O objetivo � transferir os 'n' discos para outra haste de forma n�o recursiva.													*/

void (){
}



/*9.	Escrever uma fun��o que tome 'n' palavras de entrada (cadeia de caracteres) e as escreva na ordem reversa. 
		Ex.: se a chamada PalavrasOrdemReversa(char Frase[100]) fosse executada e as palavras digitadas fossem: O elefante bebe �gua
		A sa�da produzida pelo programa seria a seguinte: �gua bebe elefante O															*/

void (){
}




int main(){
}
