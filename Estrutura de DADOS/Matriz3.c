#include <stdio.h>
#include <stdlib.h>

int* DiagPrnc(int n, int m,float **ma){
    int i, j, *v, qnt;



    v = (int *) malloc(n * sizeof(int) );

    for(i = 0 ; i < n ;i++){
        for(j = 0 ; j < m ;j++){
            if (i==j){
                      v[i] = ma[i][j];
            }

        }


    }

    return v;



}

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
    int n, m, i , j, *v;
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

    v = DiagPrnc(n, m, matriz);
    }
     for(i = 0 ; i < n ; i++){

        printf("%i\n",v[i]);

    }
}
