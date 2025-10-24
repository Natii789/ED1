//lista duplamente encadeada


struct TpPont{
	int info;
	TpPont *prox, *ant;
};


void Inicializacao(TpPont *lista){
	lista->info = NULL;
	lista->prox = NULL;
	lista->ant = NULL;
}
TpPont *NovaCaixa(int valor){
	TpPont *NC = new TpPont;
	NC -> ant = NC -> prox = NULL;
	NC -> info = valor;
	return 0;
}


void Inserir(TpPont *lista){
	
}

