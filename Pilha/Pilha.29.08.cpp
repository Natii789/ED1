/*
	ESTRUTURA DE DADOS COM ACESSO DO TIPO PILHA
		-> conceito "LIFO"
					->last in first out
		-> tamb�m chamado de PUSH-POP por acessar apenas uma extremidade denominada de TOPO
		-> aplica��es:
				- compilaores
				- sistemas operacionais 
				- c�lculo de express�es
				- recursividade
		->Opera��es Associadas 
				- Inicializar 
				- PUSH -> inserir um elemento
				- POP -> retirar e retornar
				- acesso ao elemento do topo, retornando-o
				- verifica se pilha cheia 
				- verifica se pilha vazia
				- exibir pilha
				
*/
#define MAXPILHA 10

struct TpPilha{
	int TOPO, pilha[MAXPILHA];
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

char ElementoTopo ( TpPilha p ){
	return p.PILHA[p.TOPO];
}

int Cheia ( int topo ){
	return topo == MAXPILHA -1;
}

int Vazia ( int topo ){
	return topo == -1;
}

void Exibe (TpPilha p){
	while(!vazia(p.topo))
		printf("\n%d", pop(p));
}
