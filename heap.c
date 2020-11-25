#include "heap.h"


int main () {
  int v[10] = { 4, 1, 3, 2, 16, 9, 10, 14, 8, 7 };
  int n = 10; 
   
  printf("Aluno  Bismarck De Oliveira Loureiro\n");
  printf("Matricula 20161106791\n\n");

  printf("Vetor\n"); 
  imprimir(v, n);


  printf("Aplicando Build_min_heap no vetor\n"); 
  build_min_heap(v,n);
  imprimir(v,n);


  printf("Aplicando heapsort Vetor\n"); 
  heapSort(v,n);
  imprimir(v,n);

 
  // CHAMADA DA FUNÇAO HEAP SORT

  return 0;
}
