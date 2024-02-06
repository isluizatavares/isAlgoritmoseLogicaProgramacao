/*
Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a)o novo peso se a pessoa engordar mais 15% sobre o peso digitado
b)o novo peso se a pessoa emagrecer mais de 20% sobre o peso digitado
*/

#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    float peso, engordou=0.15, emagreceu=0.20, pesoNovo1, pesoNovo2;

    printf("Informe o seu peso: ");
        scanf("%f", &peso);

    pesoNovo1 = ((peso*engordou)+peso);
                   printf("---------------------------------------------------\n");
                   printf("|||||||||||||||||||||PESO APOS ENGORDDAR|||||||||||\n");
                   printf("---------------------------------------------------\n"); 
                   printf("O peso atual é de: %.2f ", pesoNovo1);

    pesoNovo2 = (peso-(peso*emagreceu));
                   printf("---------------------------------------------------\n");
                   printf("|||||||||||||||||||||PESO APOS EMAGRECER|||||||||||\n");
                   printf("---------------------------------------------------\n"); 
                   printf("O peso atual é de: %.2f ", pesoNovo2);

    return 0;
}