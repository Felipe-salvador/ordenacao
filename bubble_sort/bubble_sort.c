#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int imprimeVetor(int vetor[TAM]){
    int cont;

    for(cont = 0; cont < TAM; cont++){
        printf("|%d|", vetor[cont]);
    }
    printf("\n");
}

void bubble_sort(int vetor[TAM]){

    int cont, i, aux;

    for(cont = 0; cont < TAM; cont++){
        for(i = 0; i < TAM-1; i++){

            imprimeVetor(vetor);

            if(vetor[i] > vetor[i+1]){
                aux = vetor[i];
                vetor[i] = vetor[i+1];
                vetor[i+1] = aux;
            }
        }
      
    }

}

int main(){

    int vetor[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    bubble_sort(vetor);

    imprimeVetor(vetor);

    return 0;
}