#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]){
	int n,i,v[19];
	int varnegativo,cnegativo = 0;
	float media;
	
	for (i=0;i<=19;i++){
		printf("Digite um numero");
		scanf("%i",&n);
				
		v[i] = n;
	}
	
        for(i=0; i<=19;i++){
        	
			 if (v[i] > 0){
			 printf("%d - %d\n",i,v[i]);
			}
			else 
			 varnegativo = (v[i]+ varnegativo);
			 cnegativo++;			  
		}
		
		media = (varnegativo/cnegativo);
		printf("Media dos valores menores que 0 = %f", media);
}

