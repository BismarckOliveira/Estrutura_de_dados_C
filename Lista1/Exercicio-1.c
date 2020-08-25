#include<stdio.h>
#include<stdlib.h>

int main (){
	
	double pol = 0.0254;
	double met = 0;
	double pe =  0.3048;
	
	printf("Digite uma Distancia em metros \n");
	scanf( "%lf" , &met);
	
	
    printf("Volar da Distancia em polegadas = ""%lf" "\n", met/pol);
    printf("Valor da Distancia em pes = " "%lf" "\n" , met/pe );
	
	
	
	system("pause");
}
