#include<stdio.h>
#include<stdlib.h>

double AreaCirculo(double r){
	double A = (3.14 * (r*r));
	return (A);
}

double AreaEsfera(double r){
	double S = 4*3.14*(r*r);
	return (S);
}

double VolumeCilindro(double p , double r , double h){
	double V = p * (r*r) * h;
	return (V);
}

double VolumeCubo(double a){
	double V = (a*a*a);
	return (V);
}

double VolumeEsfera(double r){
	double V = (4*3.14*(r*r*r)/3);
	return (V);
}

int main (int argc ,char *argv[]){
	double r,h,p,a;
	int i=99;

	
	for(;i!=0;){ 
	printf("1 - Area do Circulo\n");
	printf("2 - Area da Esfera\n");
	printf("3 - Volume do Cilindro\n");
	printf("4 - Volume do Cubo\n");
	printf("5 - Volume da Esfera\n");
	printf("0 - encerrar \n");
	scanf("%i",&i);
	
	 
     
	switch (i) 	{ 
		
	case 1: {

		printf("Digite o valor do raio \n");
		scanf("%lf",&r);
		double ResultadoAreaCirculo = AreaCirculo(r);
		printf("Area do Circulo = %2.lf \n",ResultadoAreaCirculo);
		break;
   }
	
	case 2: {
		

	    printf("Digite o valor do raio \n");
	    scanf("%lf",&r);
	    double ResultadoAreaEsfera = AreaEsfera(r);
	    printf("Area da Esfera = %2.lf \n",ResultadoAreaEsfera);
	    break;
    }
	
	case 3: {
	
	
		printf("Digite o valor do raio \n");
		scanf("%lf",&r);
		printf("Digite o valor da altura \n");
		scanf("%lf",&h);
		printf("Digite o valor do p \n");
		scanf("%lf",&p);	
		double ResultadoVolumeCilindro = VolumeCilindro(p,r,h);
		printf("Volume do Cilindro = %2.lf \n",ResultadoVolumeCilindro);
		break;
    }
	
	case 4:{

		printf("Digite o valor da area \n");
		scanf("%lf",&a);	
		double ResultadoVolumeCubo = VolumeCubo(a);	
		printf("Volume do Cubo = %2.lf \n", ResultadoVolumeCubo);
		break;
    }
	
	case 5:{
		
		printf("Digite o valor do raio \n");
		scanf("%lf",&r);
    	double ResultadoVolumeEsfera = VolumeEsfera(r);
		printf("Volume da Esfera = %2.lf \n", ResultadoVolumeEsfera);
    	break;
    }

   
   }
}
   return (0);
}
