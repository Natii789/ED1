#include <stdio.h>
#include <conio2.h>
#include <string.h>

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

//estruturas

struct TpFilme{
    char nome[60], classif[6];
    int ano, duracao; 			//ano = produção
    float gasto,renda,espec;
    TpFilme *prox;
};

struct TpLista{
	TpFilme *filme;
	int ano, lucro;
	TpLista *prox, *ant;
};

struct TpDesc{
	TpLista *inicio, *fim;
	int qtde;	
};

/////

void Inicializar(TpDesc &D){
	D.inicio = D.fim = NULL;
	D.qtde = 0;
}

TpLista *NovoNoL(int elem){	// lista de anos
	TpLista *no;
	no = new TpLista;
	no->ano = elem;
	no->prox = NULL;
	return no;
}

TpFilme *NovoNoF(TpFilme F){ // lista de filmes
	TpFilme *no;
	no = new TpFilme;
	no->ano = F.ano;
	strcpy(no->classif, F.classif);

	no->duracao = F.duracao;
	no->espec = F.espec;
	no->gasto = F.gasto;
	strcpy(no->nome, F.nome);
	no->renda = F.renda;
	//no->prox = NULL;
	return no;
}

int Busca(TpDesc D, int valor){
	TpLista *lista = D.inicio;
    while(lista != NULL){
        if(lista->ano == valor)
            return -1;  // se achar
        lista = lista->prox;
    }
    return 1;	// se não achar
}

void InserirAno(TpDesc &D){// !!!!!!!!!!!!!!arrumar *ant
    TpFilme F;
    TpLista *atual, *no;
	int pos;
    FILE *ptr = fopen("Filmes.txt", "r");
    fscanf(ptr, "%[^;];%d;%[^;];%f;%f;%d;%f\n", F.nome, &F.ano, F.classif, &F.gasto, &F.renda, &F.duracao, &F.espec);
    while(!feof(ptr)) {
        atual = D.inicio;
        no = NovoNoL(F.ano); 
        if(D.qtde == 0) {
        	no->prox = no->ant = NULL;
            D.inicio = D.fim = no;
        }
		else{
            pos = Busca(D, F.ano);
            if(pos == 1){	// se não está na lista, insere
            	if(F.ano <= D.inicio->ano) {
                    no->prox = D.inicio;
                    D.inicio = no;
                } 
				else if(F.ano >= D.fim->ano) {
                    D.fim->prox = no;
                    D.fim = no;
                }
				else{
                    ant = D.inicio;
                    atual = D.inicio->prox;
                    while (atual != NULL && F.ano > atual->ano) {
                        ant = atual;
                        atual = atual->prox;
                    }
                    no->prox = atual;
                    ant->prox = no;
            	}
            }
                
        }
        D.qtde++;
        fscanf(ptr, "%[^;];%d;%[^;];%f;%f;%d;%f\n", F.nome, &F.ano, F.classif, &F.gasto, &F.renda, &F.duracao, &F.espec);
    }
    fclose(ptr);
    getch();
}

void InserirFilme(TpDesc &D){
    TpFilme F;
    TpLista *atual, *no, *ant;
	int pos;
    FILE *ptr = fopen("Filmes.txt", "r");
   
    fscanf(ptr, "%[^;];%d;%[^;];%f;%f;%d;%f\n", F.nome, &F.ano, F.classif, &F.gasto, &F.renda, &F.duracao, &F.espec);

    while (!feof(ptr)) {
        atual = D.inicio;
        no = NovoNoL(F.ano); 

        if (D.qtde == 0) {
            D.inicio = D.fim = no;
        } else {
            
            pos = Busca(D, F.ano);
            if(pos == 1)
            {
            	if (F.ano <= D.inicio->ano) {
                    no->prox = D.inicio;
                    D.inicio = no;
                } else if (F.ano >= D.fim->ano) {
                    D.fim->prox = no;
                    D.fim = no;
                } else {
                    
                    ant = D.inicio;
                    atual = D.inicio->prox;
                    while (atual != NULL && F.ano > atual->ano) {
                        ant = atual;
                        atual = atual->prox;
                    }
                    no->prox = atual;
                    ant->prox = no;
            	}
            }
                
        }
        D.qtde++;
        fscanf(ptr, "%[^;];%d;%[^;];%f;%f;%d;%f\n", F.nome, &F.ano, F.classif, &F.gasto, &F.renda, &F.duracao, &F.espec);
    }
    fclose(ptr);
    getch();
}


void ExibirA(TpDesc D){
	while(D.qtde != 0)
	{
		printf("\n%d", D.inicio->ano);
		D.inicio = D.inicio->prox;
		D.qtde--;
	}
}

int main(void){
	TpDesc Desc;
	
	Inicializar(Desc);
	InserirAno(Desc);
	InserirFilmes(Desc);
	ExibirA(Desc);
	
	ExcluirNome(Desc);			//-> A Exclusão de um determinado Filme pelo nome;
	ExcluirAno(Desc);			//-> A Exclusão de um determinado Ano de Produção;
	ExcluirAnoDados(Desc);		//-> A Exibição de todos os dados do Ano de Produção;  
	
	return 0;
}

