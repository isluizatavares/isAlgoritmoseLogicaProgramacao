#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    /*Marcelo tem 5 laranjas e Matheus 39. Crie 3 variáveis. Duas para armazenar os valores de marcelo e matheus e uma para receber o resultado do cálculo dessas variáveis. Depois mostre o resultado na tela*/

    int marceloLaranjas = 5, matheusLaranja = 39, resultado;

    resultado = marceloLaranjas + matheusLaranja;
    printf("A soma das lanranjas de Marcelo e Matheus eh de %d laranjas \n\n", resultado);

    return 0;
}