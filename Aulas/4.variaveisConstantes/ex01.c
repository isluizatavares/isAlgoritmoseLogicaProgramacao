#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    /*crie um projeto, declare 4 váriaveis para mostrar na tela a seguinte informação:
    --> Nome
    --> Idade
    --> Sexo
    --> Altura
    lembrando que o tipo de variável deve corresponder às informações que serão mostradas.
    essas informações devem ser mostradas de forma organizada pulando linha para cada uma
    */

   char nome[50] = "Luiza Tavares"; /*para declarar uma variável string utiliza-se aspas duplas*/
   int idade=23;
   char sexo[50]= "Feminino";
   char sexo= 'F'; /*para declarar uma variável char utiliza-se aspas simples*/
   float altura=1.60;

   printf("O meu nome eh: %s \n\n", nome); /*Para mostrar uma string utilizar %s e para mostrar um char utilizar %c*/
    printf("Eu tenho %d anos de idade \n\n", idade);
        printf("Eu sou do sexo %s \n\n", sexo);
            printf("E eu tenho %.2f de altura\n\n", altura);

    
}