/*
	FILA CIRCULAs
	
		void Inicializar(TpFilaC &f);
		char Vazia(int fim);
		char Cheia(int fim);
		void Insere(TpFilaC &f, char elem);
		char Retira(TpFilaC &f);
		char ElemInicio(TpFilaC f);
		char ElemFim(TpFilaC f);
		void Exibir(TpFilaC f);
		
		** só se usa em estruturas muito grandes
*/

#define MAXFILA 5


struct TpElem{
	char info;
};

struct TpFilaC{
	int inicio, fim, cont;
	int fila[MAXFILA];
};

void Inicializa(TpFilaC &F){
	f.inicio = 0;
	f.fim = -1;
	f.cont = 0;
}

void Vazia(int cont){
	return cont == 0;
}

void Cheia(int cont){
	return cont == MAXFILA;
}

void Insere (TpFilaC &f, TpElem elem){
	if(f.fim == MAXFILA - 1)
		f.fim = -1;
	else 
		f.fim++;
	f.fila[f.fim] = elem;
	f.cont++;
}

TpElem Retira (TpFilaC &f){
	int aux = f.fila[f.inicio];
	if(f.inicio == MAXFILA - 1)
		f.inicio = 0;
	else
		f.inicio++;
	f.cont--;
	return aux;
}

TpElem ElemInicio(TpFilaC &f){
	return f.fila[f.inicio];
}

TpElem ElemFim(TpFilaC &f){
	return f.fila[f.fim];
}

void Exibe(TpFilaC f){
	while(!Vazia(f.inicio, f.fim))
		printf("\n%d", Retira(f));	
	getch();
}
