#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    int num;

    for (num = 0; num < 20; num = num + 4)
    /*Ao invés de utilizar num = num + 1 pode-se utilizar num++*/
    /*A contagem começa sempre me 0, caso inicie em 1 deve ser utilizado <= ou >=*/
    /* A variável pode ser declada já na rpetição do laço ex: for(int num = 0, num < 20; num++)*/
    {
        printf("Meu nome eh Luiza Tavares \n");
    }

    return 0;
    
}