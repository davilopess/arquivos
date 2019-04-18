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

float *TriangularSuperior(int n, int m, float *vmat){

    float *vSuperior;
    int i, j, aux = 0, k = 0;




        for (i = 0 ; i < n ; i++){
                for (j = 0 ; j < m ; j++){
                    if ( j>i){
                        aux += 1;
                    }
                }
        }

    vSuperior = (float *)malloc (sizeof(float) * aux );

        for (i = 0 ; i < n ; i++){
                for (j = 0 ; j < m ; j++){
                    if ( j>i){
                        vSuperior[k] = vmat[(m*i) + j];

                        k = k + 1;
                    }
                }
        }

        for (i = 0 ; i < aux ; i++){
                printf("%0.f",vSuperior[i]);
        }

}


main (){

    float *vmatriz, *vmatrizT, *vSuperior;
    int n, m, i, j;

    printf("Qual o numero de linhas?");
    scanf("%i",&n);

    printf("Qual o numero de colunas?");
    scanf("%i",&m);

    vmatriz = LeMatriz(n, m);
    vSuperior = TriangularSuperior(n, m, vmatriz);



}
