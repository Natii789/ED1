/*

TRABALHO 2 BIMESTRE 
	
	A partir do Arquivo Filmes.TXT gere um índice por Ano de Produção em ordem Crescente, por meio de uma 
	Lista Dinâmica Duplamente Encadeada com Descritor. E a partir do Ano de Produção, deve se utilizar uma
	Lista Simplismente Encadeada Ordenada pelo lucro (Decescente) que o Filme gere. Os dados dos Filmes devem 
	estar juntos com o lucro.
	
	-> A Exclusão de um determinado Filme pelo nome;
	-> A Exclusão de um determinado Ano de Produção;
	-> A Exibição de todos os dados do Ano de Produção;  
	
*/
#include <stdio.h>

//estruturas

struct TpFilme{
    char nome[60], classif[6];
    int ano, duracao; //ano = produção
    float gasto,renda,espec;
};

struct TpLista
{
	TpFilme *filme;
	int ano, lucro;
	TpLista *prox;
};

struct TpDesc
{
	TpLista *inicio, *fim;
	int qtde;	
};

/////

void Inicializar(TpDesc &D){
	D.inicio = D.fim = NULL;
	D.qtde = 0;
}

TpLista *NovoNoL(int elem){ // lista de anos
	TpLista *no;
	no = new TpLista;
	no->ano = elem;
	no->prox = NULL;
	return no;
}

//ACHO Q TA ERRADO, ARRUMAR!!!!!!!!!!!!!!!
TpFilme *NovoNoF(TpFilme F){ // lista de filmes
	TpFilme *no;
	no = new TpFilme;
	no->filme.ano = F.ano;
	no->filme.classif = F.classif;
	no->filme.duracao = F.duracao;
	no->filme.espec = F.espec;
	no->filme.gasto = F.gasto;
	no->filme.nome = F.nome;
	no->filme.renda = F.renda;
	no->prox = NULL;
	return no;
}

void InserirAno(TpDesc &D)
{
	TpFilme reg;
	TpLista *atual, *no;
	
	FILE *ptr = fopen("Filmes.txt","a");
    fscanf(ptr,"%[^;];%d;%[^;];%f;%f;%d;%f\n",&reg.nome, &reg.ano, &reg.classif, &reg.gasto,
											  &reg.renda, &reg.duracao, &reg.espec);
	///////////////////////////////
	while(!feof(ptr)){
		atual = D->inicio;
		no = NovoNoL(reg.ano);
		if(D.qtde == 0)
			D.inicio = D.fim = no;	
		else 
			while(atual!=D->fim){
				if(atual->ano == reg.ano)
					
				atual = atual->prox;
			}
		fscanf(ptr,"%[^;];%d;%[^;];%f;%f;%d;%f\n",&reg.nome, &reg.ano, &reg.classif, &reg.gasto, 
 	  											  &reg.renda, &reg.duracao, &reg.espec);
 	  											  
 	  											  
    }
    printf("%s %d %s %.2f %.2f %d %.2f \n",reg.nome, reg.ano, reg.classif, reg.gasto, reg.renda, reg.duracao, reg.espec);
     
    fclose(ptr);
    getch();
}

int main(void)
{
	TpDesc Desc;
	
	Inicializar(Desc);
	Inserir(Desc);
	
	return 0;
}
