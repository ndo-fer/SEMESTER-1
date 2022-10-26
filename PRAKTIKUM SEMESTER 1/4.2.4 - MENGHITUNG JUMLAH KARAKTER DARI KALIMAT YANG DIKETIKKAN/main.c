#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chr=0, sps=0;
    char kar;

    printf("Menghitung Jumlah Karakter dari Kalimat yang Diketikkan\n");
    printf("Masukkan kalimat, akhiri dengan Enter : \n");

    while((kar = getchar()) != '\n'){
        chr++;

        if (kar==' ')
            sps++;
    }
    printf("Maka jumlah karakter yang dimasukkan adalah = %i\n", chr);

    printf("Jumlah spasi yang dimasukkan adalah = %i\n\n", sps);
    return 0;
}
