/*
void Inicializa (TpPilha &p);
void PUSH (TpPilha &p, char elem);
char POP (TpPilha &p);
char ElementoTOPO (TpPilha p);
int Cheia (int TOPO);
int Vazia (int TOPO);
void Exibe (TpPilha p);
*/
#define MAXPILHA 10

struct TpPilha{
	int TOPO;
	char PILHA[MAXPILHA];
};

void Inicializa ( TpPilha &p ){
	p.TOPO = -1;
}

void PUSH ( TpPilha &p, char elem ){
	p.PILHA[++p.TOPO] = elem;
}

char POP ( TpPilha &p ){
	return p.PILHA[p.TOPO--];
}

char ElementoTOPO ( TpPilha p ){
	return p.PILHA[p.TOPO];
}

int Cheia ( int TOPO ){
	return TOPO == MAXPILHA -1;
}

int Vazia ( int TOPO ){
	return TOPO == -1;
}

void Exibe (TpPilha p){
	while(!Vazia(p.TOPO))
		printf("\n%d", POP(p));
	getch();
}
