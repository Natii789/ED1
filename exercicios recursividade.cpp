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










int main (){
	//printf("%d",Rec(5, 3));
} 







