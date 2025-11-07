/*
LISTA DINAMICA SIMPLESMENTE ENCADEADA COM *DESCRITOR*

	-> possibilita de acesso às extremidades da lista e pode armazenar caracteristicas ou elementos comuns á lista
	exemplo:
						desc
						 3
					|			|
					10->  20  ->30
*/

#include<stdio.h>

struct TpPont{
	int info;
	TpPont *prox;
};

struct TpDesc{
	TpPont *inicio, *fim;
	int qtde;
};

tpPont NovaCaixa(int elem){
	TpPont *NC = new TpPont;
	NC -> info = elem;
	NC -> prox = NULL;
	return NC;
}

void Inicializar(Tpdesc &D){
	D.inicio = D.fim = NULL;
	D.qtede = 0;
}

void Inserir(TpDesc &D){
	int valor;
	TpPont *Caixa, *ant, *atual;
	printf("\n**Inserir Ordenado com Descritor**\n");
	printf("Elemento: ");
	scanf("%d",&valor);
	while(valor!=0){
		Caixa = NovaCaixa(valor);
		if(D.qtde==0)
			D.inicio = D.fim = Caixa;
		else if(valor <= D.inicio -> info){
			Caixa -> prox = D.inicio;
			D.inicio = Caixa
		}
		else if(valor >= D.fm -> info){
			D.fim -> prox = caixa;
			D.fim = caixa;
		}
		else {
			ant = D.inicio;
			atual = D.inicio -> prox;
			while(valor >atual -> info){
				ant = atual;
				atual = atual -> prox;
			}
			Caixa -> prox = atual;
			ant -> prox = caixa;
		}
		D.qtde++;
		printf("\Elemento: ");
	}
}

int main(){
	TpDesc Desc;
	Inicializar(desc);
	Inserir(Desc);
	
	return 0;
}
