/*Escrever um algoritmo para ler o nome e a idade de uma pessoa , e exibir quantos dias
de vida ela possui. Considere sempre anos completos e que um ano possui 365 dias. */

#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main(){

    int idade, ano=365, dias;

    printf("Informe a sua idade: ");
        scanf("%d", &idade);

    dias = idade*ano;
    printf("Voce ja viveu %d dias", dias);

    return 0;

}