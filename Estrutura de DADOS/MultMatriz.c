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

float* criaMatriz ( int n, int m){
    int i ,j;
    float *matriz;

    matriz = (float *) malloc(n * m * sizeof(float));




    for(i = 0 ; i < n ;i++){
            for(j = 0 ; j < m ;j++){
                scanf ("%f", &matriz[(m*i) + j]);


            }

    }

    return matriz;



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

float* Mat(int n,int m, int p, int q, float *ma, float*mb){

    float *mc , aux = 0;
    int i, j, x;

    if (m!=q){
        return NULL;

    }


    mc = (float *) malloc(n * p * sizeof(float));

    mb = MatrizTransposta(p, q, mb);


    for( i = 0 ;  i < n ; i++){
        for( j = 0 ; j < p ; j++){
            mc[(m*i) + j] = 0;
            for ( x = 0 ; x < q ; x++){
             aux = aux + ( ma[(m*i) + x] * mb[(m*x) + j]);


            }
            mc[(m*i) + j] = aux;
            aux = 0;

        }
    }

    return mc;


}

int main (){
    int n, m, i , j, p, q;
    float *ma, *mb, *mc;

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
            for(j = 0 ; j < p ;j++){

                printf("%f ", mc[(m*i) + j]);


            }
            printf("\n");
    }


}
