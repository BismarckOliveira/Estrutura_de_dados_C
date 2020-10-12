#include<stdio.h>
#include<stdlib.h>

// Criando Estrutura da árvore 
typedef struct AB
{
   int info;
   struct AB *esq, *dir;
   
}TAB;

typedef struct ABB 
{     
   int info;      
   struct ABB *esq, *dir; 

} TABB;

// Declaração de Funções 

TAB *inicializar(){
  return NULL;
}

TAB *criar( int valor , TAB *esq , TAB *dir)
  {
TAB *n = (TAB *) malloc(sizeof(TAB));
    n->info = valor;
    n->esq  = esq;
    n->dir  = dir;
   return n;
}

void PreOrdem( TAB *n){
    printf("< ");
    if (!vazia(n))
    {
    printf(" %i ", n->info);
    PreOrdem( n->esq);
    PreOrdem( n->dir); 
    }
    printf(" >");
}

int igual( TAB *a, TAB *b)
{
 if(a ==NULL && b==NULL){
   return 1;
 
 }else if(a->info == b->info && igual(a->esq, b->esq) && igual(a->dir, b->dir)) 
 {
   return 1;
 } else  
   return 0;
}

int conta_pais_um_filho(TAB *a){
 int pai = 0;
 if((a->esq != NULL && a->dir == NULL) || (a->esq == NULL && a->dir != NULL)){
   return pai ++;
 }else 
   return 0;
  conta_pais_um_filho(a->esq);
  conta_pais_um_filho(a->dir);
}

int vazia( TAB *n){
    return (n == NULL);
} 

TAB* copia(TAB *a){

  if (a == NULL) {
    return NULL;
  }else{
    TAB *b = criar(a->info,NULL,NULL);
    b->esq=copia(a->esq);
    b->dir=copia(a->dir);
    return b;

  }
}


TABB *inicializar2()
{
  return NULL;
}

TABB *inserir(TABB *a, int elem){
  if (!a)
  {
    TABB *novo = (TABB *)malloc(sizeof(TABB));
    novo->info = elem;
    novo->esq = NULL;
    novo->dir = NULL;
    return novo;
  }
  if (a->info == elem)
  {
    return a;
  }
  if (a->info > elem)
  {
    a->esq = inserir(a->esq, elem);
  }
  else
  {
    a->dir = inserir(a->dir, elem);
  }
  return a;
}

TABB *v2a (int *vet, int n) {
  if (n == 0) {
    return NULL;
  }
   TABB *a = inicializar2();
  a = inserir(a, vet[n / 2]);

  a->esq = v2a(vet, n / 2);

  if (n % 2 == 0) {
    a->dir = v2a(&vet[n / 2 + 1], n / 2 - 1);
  }
  else {
    a->dir = v2a(&vet[n / 2 + 1], n / 2);
  }

  return a;
}

int maior(TABB *n) {
    if (n->dir != NULL) {
        return maior(n->dir);
    } else {
        return n->info;
    }
}

int menor(TABB *n) {
    if (n->esq != NULL) {
        return menor(n->esq);
    } else {
        return n->info;
    }
}

void imprimir_tabb(TABB *a)
{
  printf("<");
  if (!vazia1(a))
  {
    imprimir_tabb(a->esq);
    printf("%d", a->info);
    imprimir_tabb(a->dir);
  }
  printf(">");
}

int vazia1(TABB *a)
{
  return (a == NULL);
}

