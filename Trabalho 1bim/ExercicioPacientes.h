
/*
	FILA COM PRIORIDADE PACIENTES
	
		void InicializarTpFilaP &f);
		char Vazia(int fim);
		char Cheia(int fim);
		void Insere(TpFilaP &f, char pac);
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

void Insere(TpFilaP &f, TpPaciente pac){
    int i = f.fim, rep = 0;
    for(int j = 0; j <= f.fim; j++)
    	if (f.fila[j].id == pac.id)
            rep++;
    if(rep == 0){
    	while(i >= 0 && f.fila[i].prior > pac.prior ){   
	    	f.fila[i+1] = f.fila[i];
	        i--;
    	}
	    if(!Cheia(f.fim) && f.fila[i].id != pac.id){
	    	f.fila[i+1] = pac;
	   		f.fim++;
   		}
    }  
}

TpPaciente Retira (TpFilaP &f){
	int i;
	TpPaciente pac = f.fila[0];
	for(i=0; i<f.fim; i++)
		f.fila[i] = f.fila[i+1];
	f.fim--;
	return pac;
}

TpPaciente ElemInicio(TpFilaP f){
	return f.fila[0];
}

TpPaciente ElemFim(TpFilaP f){
	return f.fila[f.fim];
}


void Exibir(TpFilaP f, TpPaciente ate, int atend){
	printf("\nEm atendimento: %s, %d, %d", ate.nome, ate.id, ate.prior);
	printf("\nTempo atendimento: %d\n\n", atend);
	printf("\nFila de atendimento medico\n");
    for(int i=0; i <= f.fim; i++)
		printf("\n\t%s, %d, %d", f.fila[i].nome, f.fila[i].id, f.fila[i].prior);
}
