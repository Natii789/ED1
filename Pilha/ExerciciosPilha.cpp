//Exercicios

/* 	Implemente uma fun��o que retorne o resultado de qualquer explress�o p�s-fixada(Polonesa) recebida por par�metro em uma string.
	Considerando que os operandos ter�o apenas 1 digito. 
	A express�o abaixo na forma infixa � a seguinte: (1+2)*(4-5).
	entrada na forma p�s-fixada:
		|1|2|+|4|5|-|*|'\0'|
		sa�da: 3 
	
*/

void Polofodase (TpPilha p1, TpPilha p2){ // p1 = n�mero p2 = opera��o 
	
	FILE *ptr = fopen("Arquivo.txt","r");
	char c;
	
	rewind(Ptr);
    c = fgetc(Ptr);

	
	while(!feof(ptr)){
		
		
		c = fgetc(Ptr);
		//atoi(c);
		if(c == '+' || c == '-' || c == '.' || c == '/')
		PUSH(p1, c);
		
}


int main(){
	TpPilha p1, p2;
	Inicializa(p1);
	Inicializa(p2);	
}
