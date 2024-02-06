/*Escrever um algoritmo que solicite a distância em km e o tempo de viagem em horas de um
automóvel e dizer se a velocidade média foi superior ao limite de 110km/h ou não.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

main()
{
    float distancia, tempo, velocidadeMedia;

    printf("Informe a distancia em Km: ");
    scanf("%f", &distancia);

    printf("Informe o tempo de viagem: ");
    scanf("%f", &tempo);

    velocidadeMedia = distancia/tempo;

    if (velocidadeMedia >= 110)
    {
        printf("A velocidade media foi SUPERIOR a 110km/h \n");
    }else{
        printf("A velocidade media foi INFERIOR a 110km/h \n");
    }

    return 0;
    
}