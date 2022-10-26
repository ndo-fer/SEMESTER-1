#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp, hari, minggu, sisatahun, tahun;

    printf("KONVERSI HARI KE FORMAT TAHUN, MINGGU, HARI\n\n");
    printf("Masukkan Jumlah Hari : ");
    scanf("%i", &inp);

    tahun = inp / 365;
    sisatahun = inp % 365;
    minggu = sisatahun / 7;
    hari = sisatahun % 7;

    printf("%i hari sama dengan %i tahun, %i minggu, %i hari\n", inp, tahun, minggu, hari);


    return 0;
}
