#include <stdio.h>
#include <stdlib.h>

int main()
{
    float x, y, hasil;

    puts("PEMBAGIAN");

    printf("Masukkan bilangan yang akan dibagi: ");
    scanf("%f", &x);

    printf("Masukkan bilangan pembaginya: ");
    scanf("%f", &y);

    if (y == 0){
        printf("Hasil %g dibagi dengan 0 adalah tidak terdefinisi.", x);
    }
    else{
        hasil = x / y;
        printf("Hasil %g dibagi %g adalah %g", x, y, hasil);
    }
    return 0;
}
