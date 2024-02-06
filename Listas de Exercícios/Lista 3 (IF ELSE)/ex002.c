/*Desenvolva um algoritmo que leia duas notas de um aluno e calcule a média aritmética. Depois,
apresente a mensagem “Aprovado”, caso a média seja maior ou igual a 7.0, ou “Reprovado” caso
seja menor que 7.0.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

main()
{
    float n1, n2, media;

    printf("Informe a nota 1: ");
    scanf("%f", &n1);

    printf("Informe a nota 2: ");
    scanf("%f", &n2);

    media = (n1+n2)/2;

    if(media >= 7.0)
    {   
        printf("Aprovado!! \n");
    }else{
        printf("Reprovado!! \n");
    }
    
    return 0;
}