#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#define FALSE (1==0)
#define TRUE  (1==1)


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

int MatrizSimetrica (int n, float *vmat){
    int i, j;


    for (i = 0 ; i < n ; i++){
                for (j = 0 ; j < n ; j++){
                    if(vmat[(n*i) + j] != vmat[(n*j) + i]){
                       return false;

                    }
                }
            }

    return true;


}


main (){

    float *vmatriz, *vmatrizT, *vSuperior;
    int n, m, i, j;

    printf("Qual o numero de linhas?");
    scanf("%i",&n);

    printf("Qual o numero de colunas?");
    scanf("%i",&m);

    vmatriz = LeMatriz(n, m);


    printf("A matriz eh : %i", MatrizSimetrica(n, vmatriz));

}
