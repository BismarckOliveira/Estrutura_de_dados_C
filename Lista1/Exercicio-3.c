#include<stdio.h>
#include<stdlib.h>

int main (){
	
	double n1,n2,n3 ,med =0;
	
	printf("Digite a nota 1 \n");
	scanf( "%lf" , &n1);

	printf("Digite a nota 2 \n");
	scanf( "%lf" , &n2);
	
	printf("Digite a nota 3 \n");
	scanf( "%lf" , &n3);	
	
    printf("A Media do aluno e ""%lf" "\n", med = (n1 +n2 +n3)/3);
    
    if (med >= 7){
    	printf("Aprovado \n");
	}
	else 
	    printf("Reprovado \n");
	
	
	system("pause");
}
