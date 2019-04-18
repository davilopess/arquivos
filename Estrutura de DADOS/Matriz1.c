#include <stdio.h>
#include <stdlib.h>


float** criaMatriz ( int n, int m){
    int i ,j;
    float **matriz;

    matriz = (float **) malloc(n * sizeof(float*));


    for(i = 0 ; i < n ;i++){
        matriz[i] = (float *) malloc(m * sizeof(float));
    }

    for(i = 0 ; i < n ;i++){
            for(j = 0 ; j < m ;j++){
                scanf("%f",&matriz[i][j]);


            }

    }

    return matriz;



}

int main (){
    int n, m, i , j;
    float **matriz;

    printf("Qual o tamanho de linhas : ");
    scanf("%i",&n);
    printf("\nQual o tamanho de colunas : ");
    scanf("%i",&m);

    matriz = criaMatriz(n, m);
    printf("\n");
    for(i = 0 ; i < n ;i++){
            for(j = 0 ; j < m ;j++){

                printf("%f ",matriz[i][j]);


            }
            printf("\n");
    }
}
