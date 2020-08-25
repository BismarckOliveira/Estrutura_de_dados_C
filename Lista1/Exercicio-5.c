#include<stdio.h>
#include<stdlib.h>

int main (){
	
	double n1;
	
	printf("Digite o primeiro numero \n");
	scanf( "%lf" , &n1);

    if (n1 <= 10 ){
    	printf("F1 \n");
	}
	else if (n1 >10 &&  n1<=100){
		printf("F2 \n");
	} 
	else
	   printf("F3 \n");
	   
	    
	system("pause");
}
