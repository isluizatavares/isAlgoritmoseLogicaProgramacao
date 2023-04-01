#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    int num;

    printf("Escolha um dia da semana: \n");
        scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Domingo");
        break;
    case 2:
        printf("Segunda-feira");
        break;  
    case 3:
        printf("Terca-feira");
        break;
    case 4:
        printf("Quarta-feira");
        break;
    case 5:
        printf("Quinta-feira");
        break;
    case 6:
        printf("Sexta-feira");
        break;
    case 7: 
        printf("Final de Semana");
        break;                     
    default:
        printf("Numero invalido");
        break;
    }

    return 0;
}