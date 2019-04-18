#include <stdio.h>
#include <stdlib.h>
#include <fstream>


int main(){

    int c;

    FILE *file;

    // ABRE O ARQUIVO DA MATRIZ A
    file = fopen("ProgramaMatriz/MA.txt", "r" );




    if ( file ){

        while ( (c = getc(file)) != EOF ){

            printf("%c", c);

        }
        printf("%c", getc(file));
        fclose(file);

    }

    return 0;

}
