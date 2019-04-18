
//ALOCAR MATRIZ ------------------------------------------------
float *AlocaMatriz(int n, int m)
{


    float *vmat;

    vmat = (float *)malloc (sizeof(float) * n * m);

    if (vmat != NULL)
    {
        return vmat;
    }

    return NULL;
}


//LER MATRIZ ---------------------------------------------------
float *LerMatriz(int n, int m, FILE *file)
{
    int i, j;
    float *vmatriz;

    for (i = 0 ; i < n ; i++)
    {
        for (j = 0 ; j < m ; j++)
        {

            fscanf (file, "%f", &vmatriz[(m*i) + j]);
        }

    }


    return vmatriz;
}


//MULTIPLICAR MATRIZ ---------------------------------------------
float* Mult(int n,int m, int p, int q, float *ma, float*mb)
{

    float *mc, aux = 0;
    int i, j, x;

    if (m!=p)
    {
        printf("\nNao foi possivel operar\n");
        return NULL;

    }


    mc = (float *) malloc(n * q * sizeof(float));
    if (mc == NULL)
    {
        return NULL;
    }




    for( i = 0 ;  i < n ; i++)
    {
        for( j = 0 ; j < q ; j++)
        {
            mc[(q*i) + j] = 0;

            for ( x = 0 ; x < p ; x++)
            {
                aux = aux + ( ma[(m*i) + x] * mb[(q*x) + j]);
            }
            mc[(q*i) + j] = aux;
            aux = 0;

        }
    }

    for (i = 0 ; i < n ; i++)
    {
        for (j = 0 ; j < q ; j++)
        {
            printf("%0.f ", mc[(q*i) + j]);
        }
        printf("\n");
    }

    return mc;
}

// TRANSPOSTA DA MATRIZ   ---------------------------------------------------
float *MatrizTransposta(int n, int m, float *vmat)
{

    float *vmbT;
    int i, j;

    vmbT = AlocaMatriz(n, m);

    printf("\n");

    for (i = 0 ; i < m ; i++)
    {
        for (j = 0 ; j < n ; j++)
        {
            vmbT[(m*i)+j] = vmat[(m*j) + i];


        }
        printf("\n");
    }

    return vmbT;

}

//MULTIPLICAR A COM MATRIZ TRANSPOSTA DE B ---------------------------------------------------
float* Mat(int n,int m, int p, int q, float *ma, float*mb)
{

    float *mc, aux = 0;
    int i, j, x;

    if (m!=q)
    {
        printf("\nNao foi possivel operar\n");
        return NULL;

    }


    mc = (float *) malloc(n * p * sizeof(float));
    if (mc == NULL)
    {
        return NULL;
    }

    mb = MatrizTransposta(p, q, mb);


    for( i = 0 ;  i < n ; i++)
    {
        for( j = 0 ; j < p ; j++)
        {
            mc[(p*i) + j] = 0;
            for ( x = 0 ; x < q ; x++)
            {
                aux = aux + ( ma[(m*i) + x] * mb[(p*x) + j]);


            }
            mc[(p*i) + j] = aux;
            aux = 0;

        }
    }
    for(i = 0 ; i < n ; i++)
    {
        for(j = 0 ; j < p ; j++)
        {

            printf("%0.f ", mc[(p*i) + j]);


        }
        printf("\n");
    }

    return mc;


}
//LER MATRIZ  ---------------------------------------------------

float ImprimeMatriz(int n, int m, float *vmatriz)
{

    int i, j;
    for(i = 0 ; i < m ; i++)
    {
        for(j = 0 ; j <n ; j++)
        {

            printf("%0.f ", vmatriz[(m*j) + i]);


        }
        printf("\n");
    }





}

//TRIANGULAR SUPERIOR DA MATRIZ A  ---------------------------------------------------
float *TriangularSuperior(int n, int m, float *vmat)
{

    float *vSuperior;
    int i, j, aux = 0, k = 0;




    for (i = 0 ; i < n ; i++)
    {
        for (j = 0 ; j < m ; j++)
        {
            if ( j>i)
            {
                aux += 1;
            }
        }
    }

    vSuperior = (float *)malloc (sizeof(float) * aux );
    if (vSuperior == NULL)
    {
        return NULL;
    }

    for (i = 0 ; i < n ; i++)
    {
        for (j = 0 ; j < m ; j++)
        {
            if ( j>i)
            {
                vSuperior[k] = vmat[(m*i) + j];

                k = k + 1;
            }
        }
    }

    for (i = 0 ; i < aux ; i++)
    {
        printf("%0.f",vSuperior[i]);
    }

}


//ELEMENTOS DA DIAGONAL DA MATRIZ A  ---------------------------------------------------

float* DiagPrnc(int n, int m,float *ma)
{
    int i, j, qnt, NumeroDiagonais;
    float *v;
    NumeroDiagonais = m;

    if (n<m)
    {
        NumeroDiagonais = n;
    }
    v = (float *) malloc(NumeroDiagonais * sizeof(float) );
    if (v==NULL)
    {
        return NULL;
    }
    printf("Vetor = ");
    for(i = 0 ; i < n ; i++)
    {

        for(j = 0 ; j < m ; j++)
        {
            if (i==j)

            {
                v[i] = ma[(m*i)+j];
                printf("%0.f ", v[i]);

            }

        }


    }
    printf("\n");
    return v;

}

//ELEMENTOS DA DIAGONAL DA MATRIZ A  ---------------------------------------------------

float* RetornaLinha(int n, int m, float *ma, int k){

    int  j;
    float *v;

    if (k>=n){
        printf("Nao existe");
        return NULL;
    }
    v = (float *) malloc( m * sizeof(float));
    if (v==NULL)
    {
        return NULL;
    }

    for ( j = 0 ; j < m ; j++){
            v[j] = ma[(m*k)+j];
            printf("%0.f ", v[j]);
    }

    return v;

}
float* RetornaColuna(int n, int m, float *ma, int k){

    int  i;
    float *v;
    if (k>=m){
        printf("Nao existe");
        return NULL;
    }
    v = (float *) malloc( m * sizeof(float));
    if (v==NULL)
    {
        return NULL;
    }

    for ( i = 0 ; i < n ; i++){
            v[i] = ma[(m*i)+k];
            printf("%0.f ", v[i]);
            printf("\n");
    }

    return v;

}




