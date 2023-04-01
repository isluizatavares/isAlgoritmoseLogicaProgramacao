#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{

    int y1, y2, resultado;

    printf("Informe o valor de y1: ");
        scanf("%d", &y1);

    printf("Informe o valor de y2: ");
        scanf("%d", &y2);

    resultado = multiplicacao(y1, y2);
    printf("O resultado eh: %d \n\n\n\n", resultado);

    printf("-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n\n");

    printf("Informe novamente o valor de y1: ");
        scanf("%d", &y1);

    printf("Informe novamente o valor de y2: ");
        scanf("%d", &y2);

    resultado = multiplicacao(y1, y2);
    printf("O resultado eh: %d \n", resultado);

    return 0;
}

int multiplicacao(int n1, int n2, int resultado)
{
    resultado = n1*n2;
    return (resultado);
}