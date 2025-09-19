/*
	FILA Com Inicio Variavel
	
		void Inicializar(TpFilaV &f);
		char Vazia(int fim);
		char Cheia(int fim);
		void Insere(TpFilaV &f, char elem);
		char Retira(TpFilaV &f);
		char ElemInicio(TpFilaV f);
		char ElemFim(TpFilaV f);
		void Exibir(TpFilaV f);
		
		** só se usa em estruturas muito grandes
*/

#define MAXFILA 5


struct TpElem{
	char info;
	char prior;
};

struct TpFilaV{
	int inicio, fim;
	int fila[MAXFILA];
};

void Inicializa(TpFilaV &F){
	f.inicio = 0;
	f.fim = -1;
}

void Vazia(int fim){
	return fim < inicio;
}

void Cheia(int fim){
	return fim - inicio + 1 == MAXFILA;
		// fim + 1 == MAXFILA;
}

void Insere (TpFilaV &f, TpElem elem){
	f.fila[++f.fim] = elem;
}

TpElem Retira (TpFilaV &f){
	return f.fila[f.inicio++];
}

TpElem ElemInicio(TpFilaV &f){
	return f.fila[f.inicio];
}

TpElem ElemFim(TpFilaV &f){
	return f.fila[f.fim];
}

void Exibe(TpFilaV f){
	while(!Vazia(f.inicio, f.fim))
		printf("\n%d", Retira(f));	
	getch();
}
