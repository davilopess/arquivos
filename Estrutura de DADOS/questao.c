#include <stdio.h>
#include <stdlib.h>

int main(void){

    int m, n, p;

    printf("Quantidade de numeros do vetor: ");
    scanf("%i", &n);

    printf("\n");
    printf("Quantidade de linhas da matriz: ");
    scanf("%i", &m);

    printf("\n");
    printf("Quantidade de colunas da matriz: ");
    scanf("%i", &p);

    //Declaração e alocação dinamica do vetor
    float *vetor;
    vetor = (float *)malloc(sizeof(float)*n);
    if(vetor == NULL){
        printf("Erro!");
        return 0;
    };

    printf("\n");
    //Passando valores para o vetor
    for(int i = 0 ; i < n; i++){
        printf("Informe o %i valor do vetor: ", (i+1));
        scanf("%f", &vetor[i]);
    };

    //Print do vetor
    printf("Vetor: ");
    for(int i = 0; i < n; i++){
        printf(" %.1f", vetor[i]);
    };

    //Declaração e alocação dinamica da matriz
    float **matriz;
    matriz = (float**)malloc(sizeof(float *)*m);
    for(int i = 0; i < m; i++){
        matriz[i] = (float *)malloc(sizeof(float)*p);
    };
    if(matriz == NULL){
        printf("Erro!");
        return 0;
    }

    printf("\n");
    //Passando valores para a matriz
    for(int i = 0; i < m; i++){
        for(int j = 0; j < p; j++){
            printf("Informe o valor da pos[%i][%i] da matriz: ", (i+1), (j+1));
            scanf("%f", &matriz[i][j]);
            printf("\n");
        };
    };

    //Print da matriz
    for(int i = 0; i < m; i ++){
        for(int j = 0; j < p; j++){
            printf("Valor Pos[%i][%i] = %.1f", (i+1), (j+1), matriz[i][j]);
            printf("\n");
        };
    };

    //Comparando valor vetor x matriz
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            for(int k = 0; k < p; k++){
                if(vetor[i] == matriz[j][k]){
                    printf("Valor %.1f esta na %ia pos do vetor e na pos[%i][%i] da matriz!", vetor[i], (i+1), (j+1),(k+1));
                    printf("\n");
                };
            };
        };
    };

    //libera vetor
    free(vetor);

    //Libera colunas da matriz
    for(int i = 0; i < m; i++){
        free(matriz[i]);
    };

    //libera linhas da matriz
    free(matriz);



    int multMatrix(int n,int m,int p, int f,float **Ma,float **Mb){//FAZ A MULTIPLICAÇÃO DA MATRIZ
    if(m == p){
        float *matriz = (float)malloc(sizeof(float)*n);
            for(int i=0;i<n;i++){
                matriz[i] = (float*)malloc(sizeof(float)*f);
            }
        if(matriz!=NULL){
            for(int i=0;i<n;i++){
                for(int j=0;j<f;j++){
                    matriz[i][j] = 0;
                    for(int k=0;k<p;k++){
                        matriz[i][j] += (Ma[i][k]*Mb[k][j]);
                    }
                }
            }
            return matriz;
        }
    }
    return NULL;
}



float* multiMat(int n, int m, int p, int q, float* ma, float* mb){
	if((ma!=NULL)&&(mb!=NULL)){
		float *mc;
		float addmult;
		mc = (float*)malloc(sizeof(float)*n*q);
		if(mc!=NULL){
			if(m==p){
				for(int i=0; i < n; i++){
					for(int j=0; j < q; j++){
						addmult = 0.0;
						for(int k=0; k < m; k++){
							addmult += ma[m*i+k]*mb[q*k+j];
						}
						mc[q*i+j] = addmult;
					}
				}
				return mc;
			}
		}
		free(mc);
	}
	return NULL;
}




    return 0;
};

