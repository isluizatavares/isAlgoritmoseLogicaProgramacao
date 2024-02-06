#include <stdio.h>
#include<stdlib.h>
main(){
	 
	 int num;
	 
	 
	 printf("Digite um numero: ");
	 scanf("%d", &num);

	 if(num==1){
	 printf("Um \n");
	 }else if(num==2){
	 	printf("Dois \n");
	 }else if(num==3){
	 	printf("Tres \n");
	 }else if(num==4){
	 	printf("Quatro \n");
	 }else if(num==5){
	 	printf("Cinco \n");
	 }else {
	 	printf("Número invalido");
	 }
	 system("pause");
}
