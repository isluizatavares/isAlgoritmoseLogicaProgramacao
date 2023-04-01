#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

int calculo(float pGas, float pEta);

main()
{
    printf("_-_-_-_-_-_-_-_-_-_-_-_-_-_- EcoCAR _-_-_-_-_-_-_-_-_-_-_-_-_- \n\n");

    float precoGasolina, precoEtanol;

    printf("Informe o preco da gasolina: ");
        scanf("%f", &precoGasolina);

    printf("Informe o preco da etanol: ");
        scanf("%f", &precoEtanol);

    int resultado = calculo(precoGasolina, precoEtanol);

    if (resultado == 0)
    {
        printf("Compensa abastecer com gasolina \n\n");
    }else if (resultado == 1)
    {
        printf("Compensa abastecer com etanol \n\n");
    }else{
        printf("São equivalentes! \n"); 
    }
    
    system("pause");

    return 0;
}    

int calculo(float pGas, float pEta)
{
    if((pGas * 0.70) < pEta){
        return 0;
    }else if((pGas * 0.70) > pEta){
        return 1;
    }else{
        return 2;
    }
}