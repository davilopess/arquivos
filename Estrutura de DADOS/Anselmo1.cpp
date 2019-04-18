#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#define TAM 5

using namespace std;

int busca_simples (int *vetor ,int valorProcurado, int *posicaoEncontrada){
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
int criarVetor(){


    int *v, tam, i;

    printf("Qual o tamanho do vetor?");
    scanf("%i",&tam);

    v = (int *) malloc(tam * sizeof(int) );

    for(i = 0 ; i < tam ; i++){

        scanf("%i",&v[i]);

    }
     for(i = 0 ; i < tam ; i++){

        printf("%i\n",v[i]);

    }

    return v;

}
int main(){

    int *vetor;

    *vetor = criarVetor();

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

