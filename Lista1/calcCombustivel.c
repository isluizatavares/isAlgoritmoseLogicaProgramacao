/*Um motorista de taxi deseja calcular o rendimento de seu carro na praça. Sabendo-se
que o preço do combustível é de R$0,90, escreva um algoritmo para ler a marcação do
odômetro no início do dia, a marcação no final do dia, o número de litros de
combustível gasto e o valor total(R$) recebido dos passageiros . Calcular e escrever a
média do consumo em Km/l e o lucro líquido do dia.*/

#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    float  comb=0.9, kmini_dia, kmfim_dia, litrosGastos, lucroTotal, lucro, mediaconsumo;


    printf("Informe o KM incial do dia: ");
        scanf("%f", &kmini_dia);

    printf("Informe o KM final do dia: ");
        scanf("%f", &kmfim_dia);

    printf("Informe o numero de litros de combustivel gasto: ");
        scanf("%f", &litrosGastos);

    printf("Informe o lucro total recebido: ");
        scanf("%f", &lucroTotal);

    mediaconsumo = ((kmfim_dia-kmini_dia)/litrosGastos);
    printf("\nA media de consumo de KM/l foi de: %.2f", mediaconsumo);

    lucro = ((lucroTotal-litrosGastos)*comb);
    printf("\nO lucro foi de: %.2f", lucro);

    return 0;
}