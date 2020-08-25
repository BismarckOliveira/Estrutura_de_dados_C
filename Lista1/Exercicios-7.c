#include<stdio.h>
#include<stdlib.h>

int main(int argc,char *argv[]){
	
	int j, i = 20;
    int valorsoma = 0,valor[i];
    double med;
    
    for (j =0; j < i;j++ ){
	printf("Digite a um valor");
	scanf("%d ",&valor);
	valorsoma += valor;
	
	
    }
    med = valorsoma/i;
    printf("O resultando da media artmetica e %lf",med);
    
}
