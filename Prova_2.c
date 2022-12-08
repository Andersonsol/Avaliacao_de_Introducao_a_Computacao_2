Avaliação Parcial 2 
Introdução à Computação – CT866 
DC UECE – 2022.2 
1. Faça um programa que leia quatro palavras pelo teclado, e armazene cada  palavra em uma string. Depois, concatene todas as strings lidas numa única  string. Por fim apresente esta string como resultado ao final do programa (1,0). 
/* Lê 4 strings:*/
#include <stdio.h>
#include <string.h>
#define TAM 15
main()
{
char str1[TAM], str2[TAM], str3[TAM], str4[TAM];
char str[TAM*4];
int aux;
/* Le todas as strings */
printf("\n\n Digite 4 strings, teclando <ENTER> ao final de cada uma:\n");
gets(str1);
gets(str2);
gets(str3);
gets(str4);
/* Zera (inicializa) a string str, colocando um '\0' logo na primeira posicao.. Se nao fizermos isto, poderiamos ter um lixo nela que atrapalharia o resultado  */
 
str[0] = '\0';
/* Concatena as strings */
strcat(str, str1);
strcat(str, str2);
strcat(str, str3);
strcat(str, str4);
/* Apresenta o resultado */
printf("\n\n Resultado: %s\n",str);
}


2. Escreva um algoritmo ou um programa que lê uma string de até 50  caracteres, e imprime a palavra “Palíndromo” caso a string seja um  palíndromo e “Não Palíndromo”, caso contrário. Palíndromo: uma palavra ou  frase que é igual quando lida da esquerda para a direita ou da direita para a  esquerda. Exemplo de palíndromo: ovo, ata, esse, ele, ama... (1,0) 

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
	int j,flag=0; //inicia  flag com 0;
	char word[20];
	
	printf("Informe uma palavra: ");
	scanf("%s",word);
	printf("Contrario: ");
	for(j=strlen(word); j>=0; j--){
			printf("%c",word[j]);
			if((word[strlen(word)-1]==word[0]) && (word[strlen(word)-2]==word[1]))
				flag++; //Se a condição for confirmada, flag passa a valer 1; 
	}
	    printf("\n\n");		
	if(flag!=0)
		printf("PALINDROMO\n\n");
	else
	    printf("NAO É PALINDROMO\n\n");
}
}
3. Faça uma função em linguagem C ou numa linguagem que você prefira, ou  ainda um algoritmo que receba duas strings e substitua todas as  ocorrências da segunda string na primeira string por “*”. Por exemplo, se a  primeira string for “abcdabcdbbacdbba” e a segunda string “cd” a primeira  string deve ser modificada para “ab*ab*bba*bba”. (1,0) 
#include <stdio.h>
#include <stdlib.h>
#define TAMANHO_MAXIMO_DA_PALAVRA
/*Crie um programa que que recebe uma palavra e troque todas as vogais da palavra por '*'. O programa de utilizar uma função que receba uma e, caso seja uma vogal, retorne*. Utilize o comando switch para trocar as letras. 
char trocar_letras( char letra);
exemplo de entrada:
caminhar
saída do programa:
c*m*nh*r  
*/

char trocar_letras( char palavra);
int main ()
{ 
char (TAMANHO_MAXIMO_DA_PALAVRA);
int i;
printf ( "Digite a palavra a ser codificada: \n");
fgets (palavra TAMANHO_MAXIMO_DA_PALAVRA, stdin);
i = 0;
while (palavra [ i ] ! = '\0' { palavra [ i ] = troca r letra s ( palavra [i]) };
 i++} ;
 printf ( "A palavra com as letras trocadas s eh: %s ", palavra);
printf ( "\n\n"); 
return 0; }
char trocar_letras (char letra) 
{ char nova_letra;
switch (letra) {case 'a': nova_letra = ' * ';
break; 
default : nova_letra = letra;
break; }
return nova_letra;
4. Faça um programa que leia um vetor de 5 posições para números reais e,  depois, um código inteiro. Se o código for zero, finalize o programa; se for  1, mostre o vetor na ordem direta; se for 2, mostre o vetor na ordem  inversa. Caso o código for diferente de 0, 1 e 2 escreva uma mensagem  informando que o código é inválido. (2,0) 
#include <stdio.h>
#include <stdlib.h>
int main () { 
int i, opcao;
float vetor[ 5 ];
for (i = 0; i < 5; i ++) { 
    printf( "Digite o valor da posicao %d: ", i);
    scanf("%f", &vetor[ i ]);
}
do{
     printf( "\n0 - Finalizar\n1 - imprimir vetor\n2 - Imp. vetor invertido\n");
scanf( "%d", &opcao) ;
switch (opcao) {
case 0: 
         printf( "Finalizando…\n");
         break;
case 1:
          for( i = 0; i < 5 ; i == i++ ){
                 printf("%.2f ", vetor [ i ]);
          }
          printf("\n");
          break; 
case 2:
          for( i = 4; i >= 0 ; i--){
                 printf("%.2f ", vetor [ i ]);
          }
          printf("\n");
          break; 
default:
      printf ("Opcao invalida!\n");
}
}while(opcao != 0) ;
return 0;
} 


5. Explique com suas palavras a definição de funções em linguagens de  programação, as vantagens da utilização de funções para os blocos de  código e o que você entende por passagem e recebimento de parâmetros  em funções. (1,0)
Funções em linguagens de programação se baseia em separar um código que pode ser designado por qualquer outro trecho do programa. Pode ser relacionado a funções na matemática, onde podemos concatenar um nome, uma definição e invocação da mesma.  As vantagens nos possibilita a de reaproveitamento dos códigos produzidos( por mim e por outros programadores); Para minimizar a repetição códigos varias vezes dentro de um programa; permite a alteração de código de forma mais rápida;  
Os parâmetros são objetos passados por meio de um valor de referência dentro de uma função, onde esse valor pode ser imutável ou mutável. A passagem de parâmetro é a ocorrência de alterações nos padrões e existem duas formas de passar parâmetros para as funções e procedimentos – passagem por valor (só envia valores) e passagem por referência (permite enviar e também receber valores).
 
6. Em relação à declaração, invocação e passagem de parâmetros em funções  responda os itens a seguir:
Avaliação Parcial 2 
Introdução à Computação – CT866 
DC UECE – 2022.2 
a) No código abaixo, escrito em linguagem C, o que deverá ser escrito ao final da  execução do programa (0,5). 
#include <stdio.h> 
Int CapNum() { 
int n; printf("Digite um número:"); 
scanf("%d", &n); 
return n; 
printf("Executando processamento...\n"); 
} 
Int main(){ 
Int n1, n2; 
n1 = CapNum(); 
n2 = CapNum(); 
printf("A Soma dos números é: %d\n", n1+n2); 
} 


O programa pedirá dois valores para serem digitados e executará a soma de dois valores numéricos inteiro e mostrará o resultado da mesma. 
b) O código abaixo está correto? Justifique sua resposta (0,5). 
#include <stdio.h> 
double soma (char vt[50], double n1, double n2) { 
double c = n1+n2; 
printf("%s = %lf\n", vt, c); 
return c; 
} 
Int main(){ 
soma (3, 8, "A Soma dos números é: %lf\n"); 
return 0 
} 

O código implicará em erro devido alguns ajuste em sua escrita: 
Atribuir o argumento 1 de 'soma' faz o ponteiro do inteiro sem uma conversão;
Esperado 'char *' mas o argumento é do tipo 'int';
Tipo incompatível para o argumento 3 de 'soma';
 O argumento é do tipo 'int';
Esperado 'double' mas o argumento é do tipo 'char *';
7. Explique com suas palavras qual a diferença entre passagem por valor e por  referência em funções (1,0).
Passagem por valor só envia dados de valores e por referência nos permite enviar e receber valores os mesmos.
Avaliação Parcial 2 
Introdução à Computação – CT866 
DC UECE – 2022.2 
8. Defina com suas palavras (1,0): 
a. Tipo ‘Void’: 
O void é utilizado para determinar uma função que não dá retorno algum e funções que não precisam de parâmetros definidos.
b. Função ‘Main’: 
É um ponto de partida na execução do programa. Possibilita o controle , execução,  direcionando as chamadas de outras funções.
c. Protótipo de função: 
Declaração de função especificando o seu nome, tipos de argumentos e tipo de retorno e que omite o corpo. 
d. Sobrecarga de funções: 
É utilizado na programação a objeto com recurso de duas ou mais funções que possuem o mesmo nome, mas utilizam parâmetros diferentes. Quando um nome possui diferentes tarefas dentro da função é chamado de sobrecarga de função.
9. O programa abaixo escrito em linguagem C* está correto? Justifique? (1,0) 
*Se você não conhece a sintaxe de C, descreva na sua justificativa o que  você entende que esse trecho de código está fazendo enquanto algoritmo. 
#include<stdio.h>
#include<conio.h>



int main(void) 
{



float nota[100]; 
int n, i; 
printf("Número de alunos: "); 
scanf("%d", &n); 
for (i = 0; i < n; i++) { 
printf("Digite a nota do aluno %d: ", i); 
scanf("%f", &nota[i]); 
}

Descrição: Inicialmente ele exporta duas biblioteca a #include<stdio.h> e #include<conio.h>. A primeira é classicamente já utilizada em C e a segunda é para desenhar tela, e é para Dos ou Windows, onde  essas funções do conio são úteis para manipular caracteres na tela, especificar cor de carácter e de fundo. O que pelo início do programa mostra uma função desnecessária para o código. 
Portanto, o código tem como finalidade receber o número de alunos n e retirar de algum banco de dados as respectivas notas estipuladas para cada aluno. Onde o programa deverá percorrer de forma crescente cada valor partido do número 0 até o n. 
