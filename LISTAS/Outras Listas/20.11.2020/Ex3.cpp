#include <stdio.h>
#include<stdlib.h>
main(){
	 
	 int senha;
	 
	 
	 printf("Digite a senha: ");
	 scanf("%d", &senha);
	 

	 if(senha==1234){
	 printf("acesso Permitido \n");
	 }else if(senha!=1234){
	 	printf("Acesso Negado \n");
	 }
	 
	 
	 
	 system("pause");
}
