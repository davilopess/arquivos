#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#define TAM 10

using namespace std;

int busca_simples (int vetor[TAM] ,int valorProcurado, int *posicaoEncontrada){
    int cont ;
    bool valorFoiEncontrado;

     for(cont=0 ; cont < TAM ; cont++ ){
        if(vetor[cont] == valorProcurado){

            valorFoiEncontrado = true;
            *posicaoEncontrada = cont;

        }
     }
    if(valorFoiEncontrado){
        return 1;
    }else{
        return -1;
    }

}
int main(){

    int vetor[10] = {1,23,22,43,65,45,12,43,26};
    int valorProcurado;
    int posicao, cont, posicaoEncontrada;


     for(cont=0 ; cont < TAM ; cont++ ){
        cout << vetor[cont] << " - ";
    }


    printf ("Qual numero deseja encontrar\n");
    scanf("%d", &valorProcurado);

    if (busca_simples(vetor , valorProcurado, &posicaoEncontrada) == 1){
        printf ("O valor foi encontrado na posicao : %d", posicaoEncontrada);
    }else{
        printf ("O valor nao foi encontrado");
    }
    }



