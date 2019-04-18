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

int* RetornaLinha(int n, int m, float **ma, int k){

    int *v, j;

    v = (int *) malloc( m * sizeof(int));

    for ( j = 0 ; j < m ; j++){
            v[j] = ma[k][j];
    }

    return v;

}

int* RetornaColuna(int n, int m, float **ma, int k){

    int *v, i;

    v = (int *) malloc( n * sizeof(int));

    for ( i = 0 ; i < n ; i++){
            v[i] = ma[i][k];
    }

    return v;

}

int RetornaSomaColK(int n, int m, float **ma, int k){

    int i, aux = 0;



    for ( i = 0 ; i < n ; i++){
            aux += ma[i][k];
    }

    return aux;

}



int main (){
    int n, m, i , j, *vetLinha, *vetColuna, k;
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
    printf("\nQual o valor de k : ");
    scanf("%i",&k);

    // GERADOR DE VETOR COM ELEMENTOS DA LINHA K
    vetLinha = RetornaLinha(n, m, matriz, k);

    for(i = 0 ; i < m ;i++){


                printf("%i ",vetLinha[i]);


            }
    // GERADOR DE VETOR COM ELEMENTOS DA COLUNA K
     vetColuna = RetornaColuna(n, m, matriz, k);

    printf("%i",RetornaSomaColK(n, m, matriz, k));


}
