int main(){

        FILE *file;
        int *vma,i , j, l, c;


        file = fopen("MA.txt", "r");


        if ( file != NULL){
            fscanf(file, "%i %i ", &l, &c);

            printf("%i%i", l, c);


            vma = (int *)malloc (sizeof(int) * l * c);


            printf("\n");

                for (i = 0 ; i < l ; i++){
                    for (j = 0 ; j < c ; j++){

                        fscanf (file, "%i", &vma[(c*i) + j]);
                    }

                }

            for (i = 0 ; i < l ; i++){
                    for (j = 0 ; j < c ; j++){
                       printf("%i ", vma[(c*i) + j]);
                    }
                    printf("\n");
                }
        }


        fclose(file);
}
