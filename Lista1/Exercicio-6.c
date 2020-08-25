#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]){
	
	int n, dig =0;
	
	printf("Digite um numero Interio Positivo\n");
	scanf("%d",&n);
	
	if (n == 0) dig = 1;
	else
	  while (n != 0)
	  {
	  	dig ++;
	  	n = n/10;
	  }
	  
	
	
	printf("O numero %d possui %d  digitos \n",n,dig);
	
	system("pause");
}
