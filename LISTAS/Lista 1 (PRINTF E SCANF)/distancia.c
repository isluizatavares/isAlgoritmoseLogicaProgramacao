/*Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par ordenado (x,y).*/

#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    float x1, x2, y1,y2, distanciaPontos;

    printf("Informe o valor do ponto x1: ");
        scanf("%f", &x1);

    printf("Informe o valor do ponto x2: ");
        scanf("%f", &x2);

    printf("Informe o valor do ponto y1: ");
        scanf("%f", &y1);

    printf("Informe o valor do ponto y2: ");
        scanf("%f", &y2);

    distanciaPontos = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        printf("A distancia entre os dois pontos eh de: %.2f \n", distanciaPontos);

    return 0;    


}