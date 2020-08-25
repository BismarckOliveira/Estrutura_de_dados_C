#include<stdio.h>
#include<stdlib.h>

int main (){
	
	double n1,n2,n3;
	
	printf("Digite o primeiro numero \n");
	scanf( "%lf" , &n1);

	printf("Digite o segundo numero  \n");
	scanf( "%lf" , &n2);
	
	printf("Digite o terceiro numero \n");
	scanf( "%lf" , &n3);	
    
    if (n1 < n2 && n1 < n3){
    	printf("%lf",n1);
	}
	else if (n2 < n1 && n2 < n3){
		printf("%lf",n2);
	} 
	else
	   printf("%lf",n3);
	   
	    
	system("pause");
}
