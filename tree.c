#include<stdlib.h>
#include<stdio.h>
#include<locale.h>
#include "prova.h"
#define N 7
#define M 8
#define P 9


int main(){
setlocale(LC_ALL, "Portuguese");
int op , op2 =0;
  

  int vetor1[N] = {1, 2, 3, 4, 5, 6, 7};
  int vetor2[M] = {1, 2, 3, 4, 5, 6, 7, 8};
  int vetor3[P] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

  TABB *newabb1 = v2a (vetor1, N);
  TABB *newabb2 = v2a (vetor2, M);
  TABB *newabb3 = v2a (vetor3, P);

  TAB *n0 = inicializar(); 
  TAB *n4 = criar(40,NULL,NULL);
  TAB *n3 = criar(30,NULL,NULL);
  TAB *n2 = criar(20,n4,NULL);
  TAB *n1 = criar(15,n2,n3);

  TAB *p0 = inicializar(); 
  TAB *p4 = criar(40,NULL,NULL);
  TAB *p3 = criar(30,NULL,NULL);
  TAB *p2 = criar(20,p4,NULL);
  TAB *p1 = criar(15,p2,NULL);
  
  

  TAB *k0 = inicializar();
 while (op != 7)
  {
    printf("\n\n----------------MENU PRINCIPAL----------------"); 
    printf("\nAluno : Bismarck de Oliveira Loureiro / Matricula : 20161106791");
    printf("\n1 Imprimir PreOrdem De Arvore Binaria");
    printf("\n2 Imprimir Arvore Binaria de Busca");
    printf("\n3 Imprimir Maior e menor valor de uma Arvore de busca (O(n))");
    printf("\n4 Copiar (O(1))");
    printf("\n5 testar se duas arvores binarias são iguais  (O(n))");
    printf("\n6 Conta pais com somente um filho (O(n))");
    printf("\n7 sair\n");
    scanf("\n %i",&op);

    switch(op){

      case 1:
      printf("\nDigite o numero da arvore que deseja imprimir\n");
      printf("\n 1- n1\n 2- p1\n");
      scanf("%i",&op2);
        if(op2==1){
          printf("\nPreOrdem da Arvore n1\n");
          PreOrdem(n1);
        }else if (op2==2)
        {
          printf("\nPreOrdem da Arvore p1\n");
          PreOrdem(p1);
        }else printf("Numero Invalido");           
      break;
      
      case 2:
      printf("\nDigite o numero da arvore que deseja imprimir\n");
      printf("\n 1- newabb1\n 2- newabb2\n 3- newabb3\n");
      scanf("%i",&op2);
      if(op2==1){
      imprimir_tabb(newabb1);
      printf ("\n+++++++++++++++++++\n");
      } else if (op2 ==2){
      imprimir_tabb(newabb2);
      printf ("\n+++++++++++++++++++\n");
      }else if (op2 ==3){
      imprimir_tabb (newabb3);
      printf ("\n+++++++++++++++++++\n");
      }else
      printf ("NUMERO INVALIDO");
      break;

      case 3:
      printf("\nDigite o numero da arvore que deseja imprimir o maior e menor valor\n");
      printf("\n 1- newabb1\n 2- newabb2\n 3- newabb3\n");
      scanf("%i",&op2);
      if(op2==1){
      printf("O maior elemento da Arvore : \n");
      printf("%i",maior(newabb1));
      printf("\n\nO menor elemento da Arvore :\n");
      printf("%i",menor(newabb1));
      printf ("\n+++++++++++++++++++\n");
      } else if (op2 ==2){
      printf("O maior elemento da Arvore :\n");
      printf("%i",maior(newabb2));
      printf("\n\nO menor elemento da Arvore :\n");
      printf("%i",menor(newabb2));
      printf ("\n+++++++++++++++++++\n");
      }else if (op2 ==3){
      printf("O maior elemento da Arvore :\n");
      printf("%i",maior(newabb3));
      printf("\n\nO menor elemento da Arvore :\n");
      printf("%i",menor(newabb3));
      printf ("\n+++++++++++++++++++\n");
      }else
      printf ("NUMERO INVALIDO");
      break;
      
      case 4:
      printf("Digite o numero da arvore que deseja copiar\n");
      printf("\n 1- n1\n 2- p1\n");
      scanf("%i",&op2);
      if(op2 == 1)
        {
          k0 = copia(n1);
          printf("\n Arvore escolhida para Copia \n");
          PreOrdem(n1);
          printf("\n Copia da Arvore Escolhida\n");
          PreOrdem(copia(n1));
        }else if (op2 == 2)
        {
            k0 = copia(p1);
          printf("\n Arvore escolhida para Copia\n");
          PreOrdem(p1);
          printf("\n Copia da Arvore Escolhida\n");
          PreOrdem(copia(p1)); 
        }else printf("NUMERO INVALIDO");
        break;

        case 5:
        printf("\n\n Teste de igualdade nas arvores n1 e p1\n\n");
          if(igual(n1,p1) == 1){
          printf("\n ARVORES IGUAIS");
          }else
          printf("\n NAO SAO IGUAIS");
        
        break;

        case 6:
          printf("Digite o numero da arvore que deseja contar pai\n");
          printf("\n 1- n1\n 2- p1\n");
          scanf("%i",&op2);
          if(op2 == 1)
            {
              printf("\n  Esta arvore possui o seguinte numero de pais \n");
              printf("%i",conta_pais_um_filho(n1));
            }else if (op2 == 2)
            {
              printf("\n Esta arvore possui o seguinte numero de pais\n");
              printf("%i",conta_pais_um_filho(p1));
            }else 
            printf("NUMERO INVALIDO");
            break;
      
      default :
      printf ("\n");
    }
  } 
    return 0;
}
