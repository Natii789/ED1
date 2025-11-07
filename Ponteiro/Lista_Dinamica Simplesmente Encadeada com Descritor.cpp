#include<stdio.h>

struct TpPont{
	int info;
	TpPont *prox;
};

struct TpDesc{
	TpPont *inicio, *fim;
	int qtde;
};

TpPont *NovaCaixa(int elem){
	
	TpPont *NC = new TpPont;
	NC -> info = elem;
	NC -> prox = NULL;
	return NC;
}

void Inicializar(TpDesc &D){
	D.inicio = D.fim = NULL;
	D.qtde = 0;
}

void Inserir(TpDesc &D){
	int valor;
	TpPont *Caixa, *ant, *atual;
	printf("\n**Inserir Ordenado com Descritor**\n");
	printf("Elemento: ");
	scanf("%d",&valor);
	
	while(valor != 0){
		Caixa = NovaCaixa(valor);
		if(D.qtde==0)
			D.inicio = D.fim = Caixa;
		else
		{
			if(valor <= D.inicio -> info)
			{
				Caixa -> prox = D.inicio;
				D.inicio = Caixa;
			}
			else if(valor >= D.fim -> info){
				D.fim -> prox = Caixa;
				D.fim = Caixa;
			}
			else {
				ant = D.inicio;
				atual = D.inicio -> prox;
				while(valor > atual -> info){
					ant = atual;
					atual = atual -> prox;
				}
				Caixa -> prox = atual;
				ant -> prox = Caixa;
			}
		}
		D.qtde++;
		printf("\nElemento: ");
		scanf("%d",&valor);
	}
}

void Exibir(TpDesc D)
{
	while(D.qtde != 0){
        printf("\n%d", D.inicio->info);
        D.inicio = D.inicio->prox;
        D.qtde--;
    }
}

int main(void){
	TpDesc Desc;
	Inicializar(Desc);
	Inserir(Desc);
	Exibir(Desc);
	/*ExibirRecursivamenteDecrescente(Desc);
	ExibirRecursivamenteCrescente(Desc);
	Excluir(Desc);
	Exibir(Desc);*/

	return 0;
}
