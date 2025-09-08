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
	int topo;
	char pilha[MAXPILHA];
};

void Inicializa ( TpPilha &p ){
	p.topo = -1;
}

void Push ( TpPilha &p, char elem ){
	p.pilha[++p.topo] = elem;
}

char Pop ( TpPilha &p ){
	return p.pilha[p.topo--];
}

char ElementoTopo ( TpPilha p ){
	return p.pilha[p.topo];
}

int Cheia ( int topo ){
	return topo == MAXPILHA -1;
}

int Vazia ( int topo ){
	return topo == -1;
}

void Exibe (TpPilha p){
	while(!Vazia(p.topo))
		printf("\n%d", Pop(p));
	getch();
}
