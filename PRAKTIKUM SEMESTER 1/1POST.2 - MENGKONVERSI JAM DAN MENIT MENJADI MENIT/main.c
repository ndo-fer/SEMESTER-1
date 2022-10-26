#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp, jam, menit, konversi, total;

    puts("MENGKONVERSI JAM DAN MENIT MENJADI MENIT\n");
    printf("Masukkan jam dan menit, pisahkan dengan (:), (JJ:MM) = ");
    scanf("%i:%i", &jam, &menit);

    konversi = jam * 60;
    total = konversi + menit;

    printf("\n%i jam %i menit sama dengan %i menit", jam, menit, total);
    return 0;
}
