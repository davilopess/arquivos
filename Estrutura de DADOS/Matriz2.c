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

float** Mat(int n,int m, int p, int q, float **ma, float**mb){

    float **mc , aux = 0;
    int i, j, x;

    if (m!=p){
        return NULL;

    }


    mc = (float **) malloc(n * sizeof(float*));



    for(i = 0 ; i < n ;i++){
        mc[i] = (float *) malloc(q * sizeof(float));
    }


    for( i = 0 ;  i < n ; i++){
        for( j = 0 ; j < q ; j++){
            mc[i][j] = 0;
            for ( x = 0 ; x < p ; x++){
             aux = aux + ( ma[i][x] * mb[x][j]);


            }
            mc[i][j] = aux;
            aux = 0;

        }
    }

    return mc;


}

int main (){
    int n, m, i , j, p, q;
    float **ma, **mb, **mc;

    printf("Qual o tamanho da linha n : ");
    scanf("%i",&n);
    printf("\nQual o tamanho da coluna m : ");
    scanf("%i",&m);
    printf("Qual o tamanho da linha p : ");
    scanf("%i",&p);
    printf("\nQual o tamanho da coluna q : ");
    scanf("%i",&q);

    ma = criaMatriz(n, m);
    mb = criaMatriz(p, q);



    mc = Mat(n, m, p, q, ma, mb);

       for(i = 0 ; i < n ;i++){
            for(j = 0 ; j < q ;j++){

                printf("%f ",mc[i][j]);


            }
            printf("\n");
    }


}


