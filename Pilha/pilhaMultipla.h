/*	05/09/25
	Pilha Multipla
	Listas Concorrentes
	
		caso 1) 2 pilhas
			
		-1	|  |  |  |  |  |  |  MAXPILHA = 6
	  topo1  0  1  2  3  4  5     topo2 
			 
			EDs
				#define MAXPILHA 6
				struct TpPilhaM{
					int topo1, topo2;
					int Pilha[MAXPILHA]
				}
			Operações Associadas 
				void Inicializar(TpPilhaM &PM);
				void PUSH(TpPilhaM &PM, int elem, int NP);
				void POP(TpPilhaM &PM, int NP);
				void PMVazia(int topo, int NP);
				void PMCheia(int topo1, int topo2);
				void ElementoTopo(TpPilhaM PM, int NP);
				void ExibirPilha(TpPilhaM PM, int NP);
	
*/

struct TpPilhaM{
	int topo1, topo2;
	int pilha[MAXPILHA]
}
void Inicializar(TpPilhaM &PM){
	PM.topo1 = -1;
	PM.topo2 = MAXPILHA+1;
}

void PUSH(TpPilhaM &PM, int elem, int NP){
	if(NP == 1)
		PM.pilha[++PM.topo1] = elem;
	else
		PM.pilha[--PM.topo2] = elem;
}

void POP(TpPilhaM &PM, int NP){
	if(NP == 1)
		return PM.pilha[PM.topo1--];
	else
		return PM.pilha[PM.topo2++];
}

void PMVazia(int topo, int NP){
	if(NP ==1)
		return topo == -1;
	else 
		return topo == MAXPILHA;
}

void PMCheia(int topo1, int topo2){
	return topo1 == topo2 -1;
}

void ElementoTopo(TpPilhaM PM, int NP){
	if(NP ==1)
		return PM.pilha[topo1];
	else 
		return PM.pilha[topo2];
}

void ExibirPilha(TpPilhaM PM, int NP){
	if( NP == 1 )
		while (!vazia(PM.topo1, NP))
			printf(“\n%d”, POP(PM, NP));
	else
		while (!vazia(PM.topo2, nPilha))
 			printf(“\n%d”, POP(PM, NP));
}
