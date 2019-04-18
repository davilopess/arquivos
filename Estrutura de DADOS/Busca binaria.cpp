#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;



int busca_binaria (int vetor[TAM] ,int valorProcurado, int *posicaoEncontrada){

        int esquerda = 0;
        int direita = TAM - 1;
        int meio;

        while ( esquerda <= direita){

        meio = (direita + esquerda)/2;

        if (valorProcurado == vetor[meio]){
            *posicaoEncontrada = meio;
            return 1;
        }

        if (vetor[meio] < valorProcurado){
            esquerda = meio + 1;
        }else{
            direita = meio - 1;
        }
    }
        return -1;


}
int main(){

    int vetor[10] = {1,22,23,43,65,75,82,83,96};
    int valorProcurado;
    int posicao, cont, posicaoEncontrada;


     for(cont=0 ; cont < TAM ; cont++ ){
        cout << vetor[cont] << " - ";
    }


    printf ("Qual numero deseja encontrar\n");
    scanf("%d", &valorProcurado);

    if (busca_binaria(vetor , valorProcurado, &posicaoEncontrada) == 1){
        printf ("O valor foi encontrado na posicao : %d", posicaoEncontrada);
    }else{
        printf ("O valor nao foi encontrado");
    }
    }





