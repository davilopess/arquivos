#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#define TAM 5

void imprimeVetor (int vetor[TAM],int tamanho){

    int i;

    cout << "\n";

    for (i = 0 ; i < TAM ; i++){
       cout << vetor[i] << " - ";

    }


}

int main(){

    //CRIAR VETOR
    int vetor[TAM] ={10,9,8,7,6};

    int x, y, aux;

    for (x = 0 ; x < TAM ; x++){

        for (y = x + 1 ; y < tam ; y++ ){

            if(vetor[x] > vetor[y]){

                aux = vetor[x];
                vetor[x] = vetor[y];
                vetor[y] = aux;


            }

        }


    }

    imprimeVetor(vetor, TAM);
}
