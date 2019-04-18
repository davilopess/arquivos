#include <stdio.h>
#include <stdlib.h>


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




