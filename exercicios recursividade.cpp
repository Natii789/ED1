#include <math.h>
#include <stdio.h>

//1) Calcular o MDC de dois inteiros positivos de forma recursiva.
int mdc(int x, int y) {
    if (y == 0) {
        return x;
    }
    return mdc(y, x % y);
}

//2) Escrever uma função recursiva que calcule xy

int Elevada(int x, int y){
	
	if( y == 0 )
		return ;
	else
		return Elevada();
}

// 3) a) o valor de Rec(5, 3) é 10
//	  b) são feitas 18 chamadas
int Rec(int n, int m) { 
	if (n==m || n==0) 
		return 1; 
	else  
		return Rec(n-1,m) + Rec(n-1,m+1); 
}

//4

int Inverter(int vet[], int tam)
{
	if(tam == 0)
		return 1;
	else
	{
		printf("\n%d", vet[tam-1]);
		return Inverter(vet, tam-1);
	}
		
}

//5

int mdc(int x, int y)
{
	if(x == y)
		return y;
	else if(x < y)
		return mdc(y, x);
	else if(x > y)
		return mdc(x-y, y);
}


//6 

//7		torre de bosta 

struct Torre{
	int torre, tl;
};

void desenho(Torre t)
{
	int i;
	
	for(i = 0; i <= t.TLa; i++){
		gotoxy(4, 2+i);
		printf("%d", t.a[i]);
	}
	
	gotoxy(4, 6);
	printf("a");
	
	for(i = 0; i <= t.TLb; i++){
		gotoxy(8, 2+i);
		printf("%d", t.b[i]);
	}
	
	gotoxy(8, 6);
	printf("b");
	
	for(i = 0; i <= t.TLc; i++){
		gotoxy(12, 2+i);
		printf("%d", t.c[i]);
	}
	
	gotoxy(12, 6);
	printf("c");
}

int Movimento(int o, int d){
	
	
	
	printf("Haste de origem :");
	scanf("%d", &o);
	printf("Haste de destino:");
	scanf("%d", &o);
	
}


//8

//9

//10

//11









int main (){

} 







