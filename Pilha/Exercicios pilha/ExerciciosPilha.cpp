#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio2.h>

#define MAX
#include pilha.h


//1.	Ao receber duas Pilhas, retorne a concatenação das mesmas na primeira Pilha.

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



//2.	Faça uma função que possibilite a exclusão de um elemento qualquer da Pilha escolhido pelo Usuário.

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



/*3.	Implemente uma função que retorne o resultado de qualquer expressão pós-fixada (Polonesa) recebida por parâmetro em uma string. 
		Considerando que os operandos terão apenas 1 dígito. A expressão abaixo na forma infixa é a seguinte: (1+2)*(4-5).				*/

void Polonesa(TpPilha &p){
	
}



/*4.	Simule a utilização de 'n' Pilhas conforme a necessidade do Usuário. 
		As operações de inserção (PUSH) e retirada (POP), e em qual Pilha deverão agir, devem ser definidas por sorteio.				*/

void (){
}



//5.	Elaborar um módulo em C que ao receber um vetor de números inteiros e seu tamanho lógico, exiba-o de modo que seus elementos apareçam de forma inversa

void (){
}



//6.	Faça um módulo que receba, via parâmetro, um arquivo texto e retorne um novo arquivo com o conteúdo totalmente invertido. Utilize uma Pilha como estrutura para auxílio ao processo.

void (){
}



//7.	Escreva uma função que ao receber uma palavra, retorne se a mesma é palíndromo ou não.

void (){
}



/*8.	Elabore um algoritmo que mova três discos de uma Torre de Hanói, que consiste em três hastes (a - b - c), uma das quais serve de suporte para, por exemplo, 
		3 discos de tamanhos diferentes (1 -2 - 3), os menores sobre os maiores. 
		Pode-se mover um disco de cada vez para qualquer haste contanto que nunca seja co1.	locado um disco maior sobre o menor. 
		O objetivo é transferir os 'n' discos para outra haste de forma não recursiva.													*/

void (){
}



/*9.	Escrever uma função que tome 'n' palavras de entrada (cadeia de caracteres) e as escreva na ordem reversa. 
		Ex.: se a chamada PalavrasOrdemReversa(char Frase[100]) fosse executada e as palavras digitadas fossem: O elefante bebe Água
		A saída produzida pelo programa seria a seguinte: Água bebe elefante O															*/

void (){
}




int main(){
}
