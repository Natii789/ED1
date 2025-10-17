/*
UTILIZAÇÃO DE PONTEIRO
	-> para alocação dinâmica 
	declarações: tipo *p;
	variáveis estáticas: que são declaradas, não muda durante a execução do programa (n muda o tipo)
	o ponteiro é estático se declarado
	
	
	memoria (hipotetica)
		endereço	identificação	valor
		1001			 /			  44
		1002			 p			  1001
		1003			 /			  /
		1004			 /			  /
		1005			 / 			  /
		1006			 a			  10
		1007			 /			  32
		1008			 /			  50
		  .
		  .
		  .

	lista dinamâca simplesmente encadeada
			lista| | --> |30|--> |45|--> |60|-->//
	
*/

struct TpPont{
	int info;
	TpPont *prox;
};

TpPont *NovoNo (int valor){	//uma função do tipo ponteiro retorna um endereço de ponteiro
	TpPont *no; 	//no esta apontando para lixo
	no = new TpPont;	// no||-> |?|->//
	no -> info = valor;	// valor = 60, entao no-> |60|
	no -> prox = NULL;	// no-> |60| -> //
	return no;
}

TpPont *Inserir (TpPont *lista){
	int num;
	printf("\n**Inserir Ordenadamente**\n");
	printf("\nValor:");
	scanf("%d", &num);
	while(num!= 0){
		caixa =NovoNo(num); 
	}
	if(lista==NULL)
		lista = caixa;
	else{
		if(lista->info>num){
			caixa->prox = lista;
			lista = caixa; 
		}
		else{
			
		}
	}
}



int main(){
	TpPont *L = NULL;
	L = Inserir(L);
	return 0;
}




