#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, bil, jumlah=1;

    printf("Menghitung Bilangan Faktorial.\n");
    printf("Masukkan bilangan : ");
    scanf("%i", &bil);

    printf("Hasil faktorial dari %i adalah\n", bil);
    for(i=1; i<=bil; i++){
        printf("%i ", i);
        if (i != bil) printf("* ");
        jumlah = jumlah * i;
    }
    printf("= %i", jumlah);
    return 0;
}
