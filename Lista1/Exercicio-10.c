#include<stdio.h>
#include<stdlib.h>

int main (int argc, char *argv[]){
	int i,id,idade[45],idsoma = 0 ,contadorid,contadoralt;
	float alt,altura[45],altsoma = 0,mediaid,mediaalt;
	
	
	for (i=0;i<=45;i++){
		printf("Digite a idade do aluno");
		scanf("%d",&id);
		printf("Digite a Altura do aluno");
		scanf("%f",&alt);
		
		idade[i] = id;
		altura[i] = alt;
	}
	
	for (i=0;i<=45;i++){
		
		if(altura[i] < 1.70);
		idsoma += idade[i];
		contadoralt++;
		
		if(idade[i]  > 20);
		altsoma += altura[45];
		contadorid++;		
	}
	
	mediaid = (idsoma/contadoralt);
	mediaalt = (altsoma/contadorid);
	
	printf("A media de altura dos alunos com menos de 1.70 e = %d \n",mediaid);
	printf("A media de idade dos alunos com mais de 20 anos = %d \n",mediaalt);
  	
}
