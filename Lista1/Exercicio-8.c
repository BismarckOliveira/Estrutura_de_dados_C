#include<stdio.h>
#include<stdlib.h>

int main(int argc, char *argv[]){
	int soma,n = 0;
	
	
	for (;n<500;n++){
		if ( n % 2 ==0){
			soma = (n + n);
		}
	}
	printf("Soma dos numero pares maiores que 0 e menores que 500 e = %i",soma);
}
