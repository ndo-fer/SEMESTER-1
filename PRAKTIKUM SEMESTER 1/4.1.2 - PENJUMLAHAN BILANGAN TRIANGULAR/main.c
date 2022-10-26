#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, bil, jumlah=0;

    printf("Penjumlahan Bilangan Triangular.\n");
    printf("Masukkan bilangan : ");
    scanf("%i", &bil);

    printf("Hasil Penjumlahan Bilangan Triangular dari %i adalah\n", bil);
    for(i=bil; i>=1; i--){
        jumlah = i + jumlah;
        printf("%i ", i);
        if (i != 1)
            printf("+ ");
    }
    printf("= %i", jumlah);
    return 0;
}
