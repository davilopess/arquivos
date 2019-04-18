#include <stdio.h>
#include <stdlib.h>

float *AlocaMatriz(int n, int m){


    float *vmat;

    vmat = (float *)malloc (sizeof(float) * n * m);

    if (vmat != NULL){
            return vmat;
    }

    return NULL;
}

float *LeMatriz(int n, int m){

    float *vmat;
    int i, j;

    vmat = AlocaMatriz(n, m);

    if (vmat != NULL){
            for (i = 0 ; i < n ; i++){
                for (j = 0 ; j < m ; j++){
                    scanf ("%f", &vmat[(m*i) + j]);
                }
            }
    }

    return vmat;
}

float *MatrizTransposta(int n, int m, float *vmat){

    float *vmbT;
    int i, j;

    vmbT = AlocaMatriz(n, m);

    printf("\n");

    for (i = 0 ; i < m ; i++){
                for (j = 0 ; j < n ; j++){
                    vmbT[(m*i)+j] = vmat[(m*j) + i];
                    printf("%f ", vmbT[(m*i) + j]);
                }
                printf("\n");
            }
    return vmbT;

}

main (){

    float *vmatriz, *vmatrizT;
    int n, m, i, j;

    printf("Qual o numero de linhas?");
    scanf("%i",&n);

    printf("Qual o numero de colunas?");
    scanf("%i",&m);


    vmatriz = LeMatriz(n, m);

    for (i = 0 ; i < n ; i++){
                for (j = 0 ; j < m ; j++){
                   printf("%f ", vmatriz[(m*i) + j]);
                }
                printf("\n");
            }


    vmatrizT = MatrizTransposta(n, m, vmatriz);

    for (i = 0 ; i < m ; i++){
                for (j = 0 ; j < n ; j++){
                 //  printf("%f ", vmatrizT[(m*i) + j]);
                }
              //  printf("\n");
            }



}









