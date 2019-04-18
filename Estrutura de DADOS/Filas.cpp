#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#define TAM 10

    using namespace std;

void imprimeVetor (int vetor[TAM],int tamanho){

    int i;

    cout << "\n";

    for (i = 0 ; i < TAM ; i++){
       cout << vetor[i] << " - ";

    }


}

void fila_construtor (int *frente, int *tras){

    *frente = 0;
    *tras = -1;
}

void fila_enfileirar (int fila[TAM],int valor, int *tras ){

    if(*tras == TAM -1){
        printf("Pilha cheia!");
    }else{

        *tras = *tras + 1;
        fila[*tras] = valor;
    }
}

int fila_tamanho(int *tras, int *frente){

    return (*tras - *frente) + 1;

}

void fila_desinfeleirar (int fila[TAM],int *frente){

    printf("O valor : %d foi retirado", fila[*frente]);
    fila[*frente] = 0;
    *frente = *frente + 1;


}

int main(){

    int frente, tras;
    int fila[TAM] = {0,0,0,0,0,0,0,0,0};
    int valor, valorRetirado;

    fila_construtor(&frente, &tras);
    fila_enfileirar (fila, 5, &tras);
    fila_enfileirar (fila, 2, &tras);
    fila_enfileirar (fila, 15, &tras);


    fila_desinfeleirar (fila, &frente);
    fila_desinfeleirar (fila, &frente);

    imprimeVetor (fila,fila_tamanho(&tras,&frente) );
    printf("Tamanho :%d",fila_tamanho(&tras,&frente));
    return 0;
}

