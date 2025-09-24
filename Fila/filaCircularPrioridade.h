struct TpCarro{
	char id[40], cor[40], fab[30], Prioridade;
	
};
struct FilaC
{
    int Ini, Fim, cont;
    TpCarro FC[MAXFILA];
};

void Inicializar(FilaC &F)
{
    F.Ini = 0;
    F.Fim = -1;
    F.cont = 0;
}

void Inserir(FilaC &F, TpCarro elem)
{
	TpCarro aux;
	int i;
    if(F.Fim==MAXFILA-1)
		F.Fim = 0;
	else
		++F.Fim;
	F.FC[F.Fim] = elem;
	i=F.Fim;
	F.cont++;
	while(i!= F.Ini && F.FC[i].Prioridade < F.FC[i-1].Prioridade)
	{
		aux= F.FC[i-1];
		F.FC[i-1] = F.FC[i];
		F.FC[i] = aux;
		if(i==0)
			i = MAXFILA - 1;
		else	
			i--;
	}
}

TpCarro Retirar(FilaC &F)
{
	TpCarro aux;
	int i;
	aux=F.FC[F.Ini];
	if(F.Ini==MAXFILA-1)
		F.Ini=0;
	else
		F.Ini++;
	F.cont--;
	return aux;	
}

TpCarro ElemIni(FilaC F)
{
    return F.FC[F.Ini];
}

TpCarro ElemFim(FilaC F)
{
    return F.FC[F.Fim];
}

char FilaVazia(int cont)
{
    return cont == 0;
}

char FilaCheia(int cont)
{
    return cont == MAXFILA;
}

void ExibeFila(FilaC F)
{
	TpCarro aux;
    while (!FilaVazia(F.cont))
    {
    	aux = Retirar(F);
        printf("id %s cor %s fabricante %s prioridade %c\n", aux.id,aux.cor,aux.fab,aux.Prioridade);
    }
}
