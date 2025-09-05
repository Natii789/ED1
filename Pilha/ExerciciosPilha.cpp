//Exercicios

/* 	Implemente uma função que retorne o resultado de qualquer explressão pós-fixada(Polonesa) recebida por parâmetro em uma string.
	Considerando que os operandos terão apenas 1 digito. 
	A expressão abaixo na forma infixa é a seguinte: (1+2)*(4-5).
	entrada na forma pós-fixada:
		|1|2|+|4|5|-|*|'\0'|
		saída: 3 
	
*/

void Polofodase (TpPilha p1, TpPilha p2){ // p1 = número p2 = operação 
	
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
