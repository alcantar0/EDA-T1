#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void print_heap(int vetor[], int n){
    for (int x= 0; x < 8; x++)
        {
            printf("%d ", vetor[x]);
        }
    puts("\n");
}

int subir(int i, int vetor[]){
    int j = floor(i/2) ;//Considera-se o vetor inciando em 0.
    if (j>=0){
        if (vetor[i]>vetor[j]){
            int aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
        if (j==0){
            return 0;
        }
        subir(j, vetor);
    }
    
}

int descer(int i, int n, int vetor[]){
    int j = 2*i;
    if (j<=n){
        if (j<n){
            if (vetor[j+1]>vetor[j]){
                j++;

            }
        if (vetor[i]<vetor[j]){
            int aux = vetor[i];
            vetor[i] = vetor[j];
            vetor[j] = aux;
        }
        descer(j, n, vetor);
    }
}
}


int main(){
    int vetor[10]={0,87,73,47,54,6,0,43};
    descer(0, 7, vetor);
    return 0;
}