/*
Utilizando o Arquivo Texto (Pacientes.txt) com os dados abaixo, implemente uma
Simula��o de atendimento para cada Paciente.
Considere que o M�dico "chama o pr�ximo" Paciente, e o sistema deve indicar 
qual deve ser atendido no momento e definir (por sorteio) o tempo de atendimento
para este Paciente. O tempo de atendimento deve ser de 3-6 unidades de tempo (ut).

Considere que cada ut � uma itera��o ocorrida no la�o de repeti��o. O atendimento
deve ser finalizado, quando o usu�rio pressionar uma tecla ou quando os atendimentos
terminarem. Ap�s, informar: quantos atendimentos ocorreram e qual foi o tempo m�dio
que o Paciente levou para ser atendido.

Arquivo texto com 100 linhas de dados de pacientes, onde cada linha cont�m os dados
separados por ponto-e-v�rgula.

Os atributos de cada paciente s�o: Nome, ID (n�mero de identifica��o), e Prioridade.
*/

#include<stdio.h>
#include<string.h>
#include<conio2.h>
#include<ctype.h>
#include<stdlib.h>
#include <windows.h>

#include "ExercicioPacientes.h"

//Sleep();

void InserirPaciente(TpFila){
	TpPaciente pac;
	FILE *Ptr = fopen("Pacientes.txt", "r");
	fscanf(Ptr,"%[^;];%d;%d", pac.nome, pac.id, pac.prior);
	while(!feof(ptr)){
		Insere(f, pac);
		fscanf(Ptr,"%[^;];%d;%d", pac.nome, pac.id, pac.prior);
	}
	fclose(arq);
}

//

void Atendimento(){
	TpPaciente pac;
	FILE *Ptr = fopen("Pacientes.txt", "r");
	int contF = 0, contA = 0, ale;
	do{
		ale = (rand() % 4) + 3;
		if(contF == 0){
			fscanf(Ptr,"%[^;];%d;%d", pac.nome, pac.id, pac.prior);
			Insere(f, pac);
		}		

		if(contF == 3)
			contF = 0;
		else
			contF++;
		
		if(contF == ale){
			contA = 0;
			Retira(f);
		}
		else
			contA++;
			
		Sleep(ut*1000);	
	}while(!feof(ptr) || !kbhit());
	
}
	


int main(){
	TpFila f;
}
