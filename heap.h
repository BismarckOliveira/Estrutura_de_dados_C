#include <stdio.h>

int pai (int indice) {
  return indice / 2;
}

int esquerda (int indice) {
  return indice * 2;
}

int direita (int indice) {
  return (indice * 2) + 1;
}

 void min_heapify(int *v, int n, int pos) 
    { 
        int menor = pos; 
        int  e = esquerda(pos);
        int d = direita(pos);
  
     
        if ((e < n) && (v[e] < v[menor])) {
            menor = e; 
        }

        if ((d < n ) && (v[d] < v[menor])){ 
           menor = d; 
        }

        if (menor != pos) { 
            int temp = v[pos]; 
            v[pos] = v[menor]; 
            v[menor] = temp; 
            min_heapify(v, n, menor); 
          
        } 
    } 


void build_min_heap (int *v, int n) {
  int i;
  for (i = n/2 - 1; i >= 0; i--) {
    min_heapify(v, n, i);
  }
}


void heapSort(int *v, int n){
     for (int i = n - 1; i >= 0; i--) {
     int aux = v[0];
     v[0] = v[i];
     v[i] = aux;

    min_heapify(v,i,0);
  }
}
  
 
void imprimir (int *v, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d   ", v[i]);
  }
  printf("\n\n");
}