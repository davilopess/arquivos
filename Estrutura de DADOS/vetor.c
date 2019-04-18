#include <stdio.h>
#include <stdlib.h>
#include<stdbool.h>


int* criarVetor(tam){


    int *v, i;



    v = (int *) malloc(tam * sizeof(int) );


    return v;

}




int main(){


    int *vetor, i, tam;


    printf("Qual o tamanho do vetor?");
    scanf("%i",&tam);

    vetor = criarVetor(tam);

     for(i = 0 ; i < tam ; i++){

        scanf("%i",&vetor[i]);

    }
     for(i = 0 ; i < tam ; i++){

        printf("%i\n",vetor[i]);

    }




}
