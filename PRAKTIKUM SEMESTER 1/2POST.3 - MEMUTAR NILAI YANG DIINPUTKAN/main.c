#include <stdio.h>
#include <stdlib.h>

void putar (int);

int main()
{
    int bil;

    puts("===MEMUTAR NILAI YANG DIINPUTKAN=== ");
    printf("Masukkan Nilai nilai : ");
    scanf ("%d", &bil);
    printf("\nSebelum diputar = %d", bil);
    printf("\nSetelah diputar  = ");
    putar(bil);

    return 0;
}

void putar (int angka){

     int hasil;

     while (angka>0){
        hasil = angka % 10;
        angka = angka / 10;
        printf ("%d",hasil);
     }
}
