/*Faça um algoritmo para ler o salário de um funcionário e aumenta-lo em 15%. Após o
aumento, desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento
e o salário final.*/

#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    float salAumento, salDescont, salario, valAumento=0.15, valDescImposto=0.08;

    printf("Informe o salario do funcionario: ");
        scanf("%f ", &salario);
            printf("\n\n");
                   printf("---------------------------------------------------\n");
                   printf("|||||||||||||||||||||SALARIO INICIAL|||||||||||||||\n");
                   printf("---------------------------------------------------\n");
                   printf("|O salario inicial do funcionario eh: %.2f reais|\n", salario);
                   printf("---------------------------------------------------\n\n\n\n");

    salAumento = ((salario*valAumento)+salario);
                   printf("---------------------------------------------------\n");
                   printf("|||||||||||||||||||||SALARIO COM AUMENTO|||||||||||\n");
                   printf("---------------------------------------------------\n");
                   printf("\nO salario do funcionario com aumento eh de: %.2f \n", salAumento);
                   printf("---------------------------------------------------\n\n\n\n");

        salDescont = (salAumento-(salAumento*valDescImposto));
                   printf("---------------------------------------------------\n");
                   printf("|||||||||||||||||||||SALARIO COM DESCONTO|||||||||||\n");
                   printf("---------------------------------------------------\n");
                   printf("\nO salario do funcionario com aumento eh de: %.2f \n", salDescont);
                   printf("---------------------------------------------------\n\n\n\n");


    return 0;
    
}