#include <stdio.h>
#include <stdlib.h>

void triangular(int);

int main()
{
    int n;

    printf("Menghitung nilai triangular suatu bilangan\n");
    printf("Masukkan bilangan : ");
    scanf("%i", &n);
    triangular(n);
    return 0;
}

triangular(int bil){
int i, jumlah=0;

    printf("Hasil Penjumlahan Bilangan Triangular dari %i adalah\n", bil);
    for(i=bil; i>=1; i--){
        jumlah = i + jumlah;
        printf("%i ", i);
        if (i != 1)
            printf("+ ");
    }
    printf("= %i", jumlah);
}
