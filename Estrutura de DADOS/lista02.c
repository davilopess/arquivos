#include <stdio.h>
#include <stdlib.h>

/*Faça um algoritmo para:
	Receber uma Matriz armazenada em um vetor e
Retornar:
0 – Se for um Matriz Quadrada;
1 – Se for uma Matriz simétrica;
2 – Se for Matriz Diagonal;
3 – Se é Matriz Assimétrica;

*/

//OBS: O codigo ta sem a matriz diagonal

int TipodeMatriz(int *va, int n, int m){  // n = linhas e m = colunas

    // Q3 a Quadrada//
        if (n == m){ // teste matriz quadrada
            for (int i = 0; i < n; i++){ // teste matriz simetrica - precisa ser uma matriz quadrada!
                for (int j = 0; j < n; j++){
                    if (va[i * n + j] != va[j * n + i]){
                        //Se nao for simetrica vai verificar se é assimetrica
                        int *vTransposta = (int *)malloc(sizeof(int) * n * m);
                        int *vOposta = (int *)malloc(sizeof(int) * n * m);

                        //Matriz inversa va para comparar com a transposta e verificar se é assimetrica
                        if (vOposta != NULL && vTransposta != NULL){
                            for (int i = 0; i < (n * m); i++){
                                vOposta[i] = (va[i] * -1); //Matriz oposta
                            };

                            for (int i = 0; i < n; i++){
                                for (int j = 0; j < m; j++){
                                    vTransposta[j * n + i] = va[i * m + j]; //Matriz transposta
                                };
                            };

                            int contElemento = 0; //armazenara o total de igualdades encontradas na matriz, deve ser igual a n*m
                            for (int i = 0; i < (n * m) ; i++){
                                if (vTransposta[i] == vOposta[i]){
                                    contElemento++;
                                };
                            };

                            free(vOposta);
                            free(vTransposta);

                            if (contElemento == (n * m)){ // contador deve ser igual ao tamanho total da matriz para que tudo seja igual e ela seja assimetrica
                                return 3;
                            };
                        };
                        return 0;
                    };
                };
            };
            return 1;
        };


};



int main(){


    int *mat; // int mat[n][m]
    int elm;
    int soma;
    int n,m,k;

    printf("insira o numero de linhas: ");
    scanf("%i",&n);
    printf("insira o numero de colunas: ");
    scanf("%i",&m);

    int tam = n*m;

    mat = ( int *) malloc ( sizeof(int)* n *m);
    if ( mat != NULL ) {
        for ( int i=0; i< n; i++) {
            for (int j=0; j< m; j++) {

                printf ("entre com o elemento %d, %d da matriz: ", i , j );
                scanf ( "%d", &elm);

                k = i*m + j;
                mat[k] = elm;
            }
        }
    };

    for(int i=0;i<tam;i++){
        printf("%i\n",mat[i]);
    }
    printf("\n");
    printf("%d",TipodeMatriz(mat,n,m));

    free(mat);
return 0;
}
