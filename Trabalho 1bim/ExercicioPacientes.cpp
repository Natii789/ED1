/*
Utilizando o Arquivo Texto (Pacientes.txt) com os dados abaixo, implemente uma
Simulação de atendimento para cada Paciente.
Considere que o Médico "chama o próximo" Paciente, e o sistema deve indicar 
qual deve ser atendido no momento e definir (por sorteio) o tempo de atendimento
para este Paciente. O tempo de atendimento deve ser de 3-6 unidades de tempo (ut).

Considere que cada ut é uma iteração ocorrida no laço de repetição. O atendimento
deve ser finalizado, quando o usuário pressionar uma tecla ou quando os atendimentos
terminarem. Após, informar: quantos atendimentos ocorreram e qual foi o tempo médio
que o Paciente levou para ser atendido.

Arquivo texto com 100 linhas de dados de pacientes, onde cada linha contém os dados
separados por ponto-e-vírgula.

Os atributos de cada paciente são: Nome, ID (número de identificação), e Prioridade.
*/

#include<stdio.h>
#include<string.h>
#include<conio2.h>
#include<ctype.h>
#include<stdlib.h>
#include <windows.h>

#include "ExercicioPacientes.h"
 

void Atendimento(TpFilaP &f){
	TpPaciente pac, atendido;
	FILE *ptr = fopen("Pacientes.txt", "r");
	int contF = 0, contA = 0, ale, ale2 = 0, linha;
		// contF = contador da fila, a cada 3 unidades de tempo um pacuente aleatorio entra na fila
		// contA = contador de atendimento, conta as unidades até dar o tempo de atendimento do paciente
		
	do{	
		// INSERÇÃO NA FILA
		if(contF == 0 && !Cheia(f.fim)){
			linha = 0;
			rewind(ptr);
			ale = rand() % 101;
			while (linha <= ale){
				fscanf(ptr,"%[^;];%d;%d", pac.nome, &pac.id, &pac.prior);
				fgetc(ptr);
    			linha++;	
			}
   			Insere(f, pac);
		}		
		if(contF == 3)
			contF = 0;
		else
			contF++; // + 1 unidade de tempo na fila 

		// ATENDIMENTO MÉDICO
		
		if(contA == ale2){
			atendido = Retira(f);
			ale2 = (rand() % 4) + 3;
			contA = 0;	
		}
		else
			contA++; // + 1 unidade de tempo de atendimento	
			
		clrscr();
		Exibir(f, atendido);
		Sleep(100);
			
	}while(!kbhit()); // kbhit : quando aperta qualquer coisa o programa para
	fclose(ptr);
}


int main(){
	TpFilaP f;
	Inicializa(f);
	
	Atendimento(f);
}
