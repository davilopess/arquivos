#include <stdio.h>
#include <stdlib.h>
#include "FuncoesMatriz.h"



int main()
{

    FILE *MatrizA, *MatrizB;
    int i, j, la, ca, lb, cb, opcao = 1, k;
    float *vma,*vmb, *vmc;

    //ABRE O ARQUIVO DA MATRIZ A e B
    MatrizA = fopen("MA.txt", "r");

    //LER VALOR DA LINHA E COLUNA DE B
    if ( MatrizA != NULL)
    {

        fscanf(MatrizA, "%i %i ", &la, &ca);
        printf("%i%i\n", la, ca);
        vma = AlocaMatriz(la, ca);
        printf("\n");

        for (i = 0 ; i < la ; i++)
        {
            for (j = 0 ; j < ca ; j++)
            {
                fscanf (MatrizA, "%f", &vma[(ca*i) + j]);
            }
        }

        for (i = 0 ; i < la ; i++)
        {
            for (j = 0 ; j < ca ; j++)
            {
                //printf("%0.f ", vma[(ca*i) + j]);
            }
            //printf("\n");
        }
    }
    fclose(MatrizA);

    //LER VALOR DA LINHA E COLUNA DE B
    MatrizB = fopen("MB.txt", "r");

    if ( MatrizB != NULL)
    {

        fscanf(MatrizA, "%i %i ", &lb, &cb);
        printf("%i%i\n", lb, cb);
        vmb = AlocaMatriz(lb, cb);
        printf("\n");

        for (i = 0 ; i < lb ; i++)
        {
            for (j = 0 ; j < cb ; j++)
            {
                fscanf (MatrizB, "%f", &vmb[(cb*i) + j]);
            }
        }

        for (i = 0 ; i < lb ; i++)
        {
            for (j = 0 ; j < cb ; j++)
            {
                //printf("%0.f ", vmb[(cb*i) + j]);
            }
            //printf("\n");
        }
    }
    fclose(MatrizB);

    //ABRE O MENU



    while (opcao!=0)
    {
        printf("\nEscolha uma operacao abaixo :\n\n[1] - A X B\n[2] - A X BT\n[3] - AT\n[4] - Triangular superior de A\n[5] - Diagonal de A\n[6] - Linha K de A\n[7] - Coluna K de A\n");
        scanf("%i",&opcao);
        switch(opcao)
        {

        //Multiplica A e B
        case 1:
            vmc = Mult(la, ca, lb, cb, vma, vmb);
        break;
        //Multiplica A com matriz transposta de B
        case 2:
            vmc = Mat(la, ca, lb, cb, vma, vmb);

        break;
        case 3:
            vmc = MatrizTransposta(la, ca, vma);
            ImprimeMatriz(la, ca, vma);

        break;

        case 4:
            vmc = TriangularSuperior(la, ca, vma);
        break;

        case 5:
            vmc = DiagPrnc(la, ca, vma);
        break;

        case 6:
            printf("Qual o valor de k?");
            scanf("%i", &k);
            vmc = RetornaLinha(la, ca, vma, k);
        break;


        case 7:
            printf("Qual o valor de k?");
            scanf("%i", &k);
            vmc = RetornaColuna(la, ca, vma, k);
        break;

        }
    }
}
