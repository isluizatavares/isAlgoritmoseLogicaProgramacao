#include <stdio.h>
#include<stdlib.h>
main(){
	 
	 float qtdmacas, qtd;
	 
	 
	 printf("Digite a quantidade de macas compradas: ");
	 scanf("%f", &qtdmacas);
	 

	 if(qtdmacas<10){
	 	qtd = qtdmacas * 0.50;
	 	printf("O valor total e: %.2f \n",qtd);
    }else if(qtdmacas>=10){
    	qtd = qtdmacas * 0.40;
    	printf("O valor total e: %.2f \n",qtd);
	}
	 
	 
	 
	 system("pause");
}
