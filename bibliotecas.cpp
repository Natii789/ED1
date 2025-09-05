#include <stdio.h>

fopen(); - Abre um arquivo e retorna um ponteiro para ele.
fclose(); - Fecha um arquivo aberto anteriormente.
fgetc(); - L� um caractere do arquivo.
fputc(); - Escreve um caractere em um arquivo.
fgets(); - L� uma linha de um arquivo.
fputs(); - Escreve uma string em um arquivo.
fwrite(); - Escreve um bloco de dados em um arquivo.
fprintf(); - Escreve dados formatados em um arquivo.
fscanf(); - L� dados formatados de um arquivo.
fseek(); - Move o ponteiro do arquivo para uma posi��o espec�fica.
ftell(); - Retorna a posi��o atual do ponteiro do arquivo.
rewind(); - Reseta o ponteiro do arquivo para o in�cio.
feof(); - Verifica se o fim do arquivo foi alcan�ado.

printf(); - Imprime dados formatados na sa�da padr�o (console).
scanf(); - L� dados formatados da entrada padr�o (teclado).
puts(); - Escreve uma string na sa�da padr�o seguida por uma nova linha.
gets(); - L� uma linha de entrada padr�o.
rename(); - Renomeia um arquivo.
remove(); - Remove (exclui) um arquivo.
fflush(); - � garantir que os dados contidos em um buffer sejam realmente 
escritos.

#include <string.h>

strlen(); - Retorna o comprimento de uma string.
strcpy(); - Copia uma string para outra.
strcmp(); - Compara duas strings lexicograficamente.
strtok(); - Divide a entrada em palavras
strupr(); - � usado para converter uma string para mai�sculas.

#include <ctype.h>

isspace(); - Verifica se o caractere � um espa�o em branco.
tolower(); - Converte uma letra mai�scula em min�scula.
toupper(); - Converte uma letra min�scula em mai�scula.


#include <stdlib.h>

system(); - Executa um comando no sistema operacional.
CONSTANTES: NULL - Representa um ponteiro nulo
srand(); - Define a "semente" para gera��o de n�meros pseudoaleat�rios.
rand(); - gera o n�mero aleat�rio.


#include <conio2.h>

clrscr(); - Limpa a tela do console.
gotoxy(); - Move o cursor para uma posi��o espec�fica na tela.
textcolor(); - Define a cor do texto que ser� impresso no console.
textbackground(); - Define a cor do fundo do texto no console.
getch(); - L� um caractere do teclado sem eco�-lo na tela.
getche(); - L� um caractere do teclado e o ecoa na tela.
kbhit(); - Detecta se o usu�rio apertou alguma tecla.


#include <windows.h>

Sleep(); - Suspende a execu��o do thread atual por um per�odo especificado.


#include <locale.h>

setlocale(categoria, "localidade"); - para configurar o local.

categoria: define qual parte ser� afetada

LC_ALL ? todas as categorias
LC_CTYPE ? caracteres e fun��es como toupper() e isalpha()
LC_NUMERIC ? formato de n�meros
LC_TIME ? formato de datas
LC_MONETARY ? formata��o monet�ria

"localidade": string que define o idioma e codifica��o, por exemplo:

"Portuguese_Brazil.1252" ? Portugu�s Brasil no Windows (code page 1252)
"pt_BR.UTF-8" ? Portugu�s Brasil no Linux UTF-8
"" ? usa a configura��o padr�o do sistema


#include <time.h>

time(); - D� a hora atual em segundos
