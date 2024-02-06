/*Desenvolva um programa para ler a temperatura de uma pessoa doente e mostrar a mensagem
“está com febre” ou “Não está com febre” considerando o valor base de 37.5ºC.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

main()
{
    float temperatura;

    printf("Informe a sua temperatura: ");
        scanf("%f", &temperatura);

    if ( temperatura >= 37.5)
    {
        printf("Voce esta com febre \n");
    }else{
        printf("Voce nao esta com febre");
    }

    return 0;
    
}