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
    int vetor[TAM] ={10,9,8,7,6};

    int atual, i, j;

    for (i = 1 ; i < TAM ; i++){

        atual = vetor[i];

        j = i - 1;

        while ((j >= 0) && (atual < vetor[j])){

            vetor[j + 1] = vetor[j];

            j = j - 1;



        }

        vetor[j + 1] = atual;

    }

    imprimeVetor(vetor, TAM);




}
