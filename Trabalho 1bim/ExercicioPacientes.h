/*
	FILA COM PRIORIDADE PACIENTES
	
		void InicializarTpFilaP &f);
		char Vazia(int fim);
		char Cheia(int fim);
		void Insere(TpFilaP &f, char elem);
		char Retira(TpFilaP &f);
		char ElemInicio(TpFilaP f);
		char ElemFim(TpFilaP f);
		void Exibir(TpFilaP f);
*/

#define MAXFILA 100


struct TpPaciente{
	char nome[50];
	int id, prior;		//(1-Urgente / 2-Médio / 3-Normal)
};

struct TpFilaP{
	int fim;
	TpPaciente fila[MAXFILA];
};

void Inicializa(TpFilaP &f){
	f.fim = -1;
}

int Vazia(int fim){
	return fim == -1;
}

int Cheia(int fim){
	return fim == MAXFILA - 1;
}
/*
void Insere (TpFilaP &f, TpPaciente elem){
	int i = f.fim, j = f.fim;
	
	while(i>=0 && f.fila[i].prior < elem.prior)
		i--;
		
	if(f.fila[i].prior == elem.prior){
		while(j>i){
			f.fila[j+1] = f.fila[j];
			j--;
		}
		f.fila[i+1] = elem;
		f.fim++;
		
	}
}*/

void Insere(TpFilaP &f, TpPaciente elem){
    int i = f.fim;
    while(i >= 0 && f.fila[i].prior < elem.prior){
        f.fila[i+1] = f.fila[i];
        i--;
    }
    f.fila[i+1] = elem;
    f.fim++;
}


TpPaciente Retira (TpFilaP &f){
	int i;
	TpPaciente elem = f.fila[0];
	for(i=0; i<f.fim; i++)
		f.fila[i] = f.fila[i+1];
	f.fim--;
	return elem;
}

TpPaciente ElemInicio(TpFilaP f){
	return f.fila[0];
}

TpPaciente ElemFim(TpFilaP f){
	return f.fila[f.fim];
}


void Exibir(TpFilaP f, TpPaciente ate){
	printf("\nFila de atendimento medico");
	printf("\nAtendido: %s, %d, %d", ate.nome, ate.id, ate.prior);
    for(int i=0; i <= f.fim; i++)
        printf("\n%s, %d, %d", f.fila[i].nome, f.fila[i].id, f.fila[i].prior);
}

/*
void Exibir(TpFilaP f){
	TpPaciente elem; 
	while(!Vazia(f.fim)){
		elem = Retira(f);
		printf("\n%s, %d, %d",elem.nome,elem.id, elem.prior);
	}
}*/
