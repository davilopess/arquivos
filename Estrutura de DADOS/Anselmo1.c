#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


int* criarVetor(tam){


    int *v, i;



    v = (int *) malloc(tam * sizeof(int) );


    return v;

}


int buscarVetor (int *v, int n, int key){
    int i, posicao;
    bool valorFoiEncontrado = false ;



    for(i = 0 ; i < n ; i++){

        if (v[i] == key){

        valorFoiEncontrado = true;
        posicao = i;
        }
    }

    if (valorFoiEncontrado){
        return posicao;
    }else{
        return -1;
    }


}

int main(){


    int *vetor, key, n, i;


    printf("Qual o tamanho do vetor?");
    scanf("%i",&n);

    vetor = criarVetor(n);

     for(i = 0 ; i < n ; i++){

        scanf("%i",&vetor[i]);

    }
     for(i = 0 ; i < n ; i++){

        printf("%i\n",vetor[i]);

    }


    printf("Qual o numero procurado");
    scanf("%i", &key);

    buscarVetor(vetor, n, key);

    printf("%d",buscarVetor(vetor, n, key));


}
