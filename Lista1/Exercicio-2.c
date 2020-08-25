#include<stdio.h>
#include<stdlib.h>

int main (){
	
    double venda = 0;
	double comi = 0.10;
	
	printf("Digite o valor da venda \n");
	scanf( "%lf" , &venda);
	
	
    printf("Volar Total da venda com a comissao = ""%.2lf" , venda + (venda*comi));
  
}
