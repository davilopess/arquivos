#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#define TAM 5

    using namespace std;

void imprimeVetor (int vetor[TAM],int tamanho){

    int i;

    cout << "\n";

    for (i = 0 ; i < TAM ; i++){
       cout << vetor[i] << " - ";

    }


}

int main(){

    //CRIAR VETOR
    int vetor[TAM] ={5,3,2,4,7};



    int posicaoMenor, aux , i, j;

    for (i = 0 ; i < TAM  ; i++){

        posicaoMenor = i;

        for (j = i + 1 ; j < TAM ; j++){


        if(vetor[j] < vetor[posicaoMenor]){

            posicaoMenor = j;

           }

        }

        if(posicaoMenor != i){
            aux = vetor[i];
            vetor[i] = vetor[posicaoMenor];
            vetor[posicaoMenor] = aux;

        }

    }

imprimeVetor(vetor, TAM);

}
