#include <stdio.h>

int CmpVectorMatrix ( int n, int m, int p, float vet[n], float mat[m][p]){

    for(int i=0;i<m;i++){
        for(int j=0;j<p;j++){
            for(int e=0;e<n;e++){
                if(vet[e]== mat[i][j]){
                    printf("\n Elemento[%i][%i] da matriz e posicao %i do vetor \n",i,j,e);
                };
            };
        };
    };

};

int CmpVectorMatrix ( int n, int m, int p, float *vet, float *mat){
    for(int i =0;i<(m*p);i++){
        for(int j =0;j<n;j++){
            if(vet[e]== mat[i][j]){
                printf("\n Elemento[%i][%i] da matriz e posicao %i do vetor \n",i,j);
        };
    };
};

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

int main(){

//pro vetor
int tam;
printf("qual o tamanho do vetor: ");
scanf("%i",&tam);
float v[tam];
for(int i = 0; i<tam; i++){
    printf("insira um valor: ");
    scanf("%f", &v[i]);
};
for(int i = 0; i<tam; i++){
    printf("%2.f \n",v[i] );
}
//pra matriz
int linha, coluna;
printf("insira o numero de linhas da matriz: ");
scanf("%i", &linha );
printf("insira o numero de colunas da matriz: ");
scanf("%i", &coluna);

float m[linha][coluna];

for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
        printf("insira um valor: ");
        scanf("%f", &m[i][j]);
        printf("%2.f \n", m[i][j]);
    };

};
for(int i=0;i<linha;i++){
    for(int j=0;j<coluna;j++){
        printf("%2.f \n", m[i][j]);
    };
};

//problema


CmpVectorMatrix ( tam, linha, coluna, v, m);


return 0;
}
