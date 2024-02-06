/*A Imobiliária IMÓBILIS vende apenas terrenos retangulares. Faça um algoritmo e um
programa em C++ para ler as dimensões de um terreno e depois exibir a área do
terreno.*/

#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{

        float area, largura, comprimento;

        printf("Informe a largura da area: ");
        scanf("%f", &largura);

        printf("Informe o comprimento da area: ");
        scanf("%f", &comprimento);

        area = comprimento*largura;
        printf("%.2f", area);

        return 0;

}
