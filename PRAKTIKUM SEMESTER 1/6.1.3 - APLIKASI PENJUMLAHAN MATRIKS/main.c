#include <stdio.h>
#include <stdlib.h>
#define MAKS 10

void inputmat (int);
void output (int[][MAKS], int[][MAKS], int[][MAKS]);

int i, j, ordo;

int main(){

    puts("Aplikasi Penjumlahan Matriks");
    printf("Masukkan ordo matriks (maks.10) : ");
    scanf("%i", &ordo);
    fflush(stdin);

    if(ordo>10)
        ordo=MAKS;

    inputmat(ordo);

    return 0;
}

void inputmat (int ordo){

    int matriks1[ordo][ordo], matriks2[ordo][ordo], hasil[ordo][ordo];

    for(i=0; i<ordo; i++){
        for(j=0; j<ordo; j++){
            hasil[i][j]=0;
        }
    }

    puts("\nData Matriks Pertama");
    for(i=0; i<ordo; i++){
        for(j=0; j<ordo; j++){
            printf("data(%i, %i) = ", i+1, j+1);
            scanf("%i", &matriks1[i][j]);
            hasil[i][j]+=matriks1[i][j];
            fflush(stdin);
        }
    }

    puts("\nData Matriks Kedua");
    for(i=0; i<ordo; i++){
        for(j=0; j<ordo; j++){
            printf("data(%i, %i) = ", i+1, j+1);
            scanf("%i", &matriks2[i][j]);
            hasil[i][j]+=matriks2[i][j];
            fflush(stdin);
        }
    }

    printf("\n");

    output(matriks1, matriks2, hasil);

}

void output (int mat1[][ordo], int mat2[][ordo], int hsl[][ordo]){

    for(i=0; i<ordo; i++){
        printf("|");
        for(j=0; j<ordo; j++){
            printf("%3i ", mat1[i][j]);
        }
        printf(" |  +  |");
        for(j=0; j<ordo; j++){
            printf("%3i ", mat2[i][j]);
        }
        printf(" |  =  |");
        for(j=0; j<ordo; j++){
            printf("%3i ", hsl[i][j]);
        }
        printf(" |");
        printf("\n");
    }
}
