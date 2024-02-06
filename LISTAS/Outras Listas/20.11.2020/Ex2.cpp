#include <stdio.h>
#include<stdlib.h>
main(){
	 
	 int num1, num2;
	 
	 
	 printf("Digite um numero: ");
	 scanf("%d", &num1);
	 
     printf("Digite outro numero: ");
	 scanf("%d", &num2);

	 if(num1==num2){
	 printf("Os valores sao iguais \n");
	 }else if(num1!=num2){
	 	printf("Os valores sao diferentes \n");
	 }
	 
	 
	 
	 system("pause");
}
