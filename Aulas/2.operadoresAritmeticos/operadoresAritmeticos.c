#include <stdio.h> //Biblioteca necessária p/ executar os comandos de entrada e saída do projeto;
#include <stdlib.h> //Biblioteca padrão p/ controle de processos e de memória;
#include <conio.h>
#include <math.h>

main() //É a função responsável por uma sub-rotina que é utilizada em um programa;
{
    int x, y, soma, sub, div, mult, resto, pot;
    printf("Informe o valor de x: ");
        scanf("%d", &x);

    printf("Informe o valor de y: ");
        scanf("%d", &y);

    soma = x+y;
    sub = x-y;
    div = x/y;
    mult = x*y;
    resto = x%y; /*resto da divisão*/
    pot = pow(5, 2); /*Potência 5 elevado na 2*/


    printf("X + Y = %d \n", soma);
        printf("X - Y = %d \n", sub);
            printf("X / Y = %d \n", div);
                printf("X ./. Y = %d \n", resto);
                    printf("X * Y = %d \n", mult);
                        printf("X ^ Y = %d \n", pot);


                            printf("Soma de 5 + 5: %d\n", 5+5); //Cálculo imediato

    return 0;
}