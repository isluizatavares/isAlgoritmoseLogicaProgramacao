#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{

    int x, y;

    printf("Informe o valor de x: ");
        scanf("%d", &x);

    printf("Informe o valor de y: ");
        scanf("%d", &y);  

        if (x==y)
        {
            printf("true\n");
        }else{
            printf("false\n");
        }

        return 0;
          
}
