#include <stdio.h> 
#include <stdlib.h> 
#include <conio.h>
#include <math.h>

main()
{
    int x, y;

    printf("Informe o valor de X: ");
        scanf("%d", &x);

    printf("Informe o valor de Y: ");
        scanf("%d", &y);

    if (x<y)
    {
        printf("%d eh menor que %d", x,y);
    }if (x>y)
    {           
        printf("%d eh maior que %d", x,y);
    }if (x==y)
    {
        printf("%d eh igual a %d", x,y);
    }
    

    return 0;
    
            
}