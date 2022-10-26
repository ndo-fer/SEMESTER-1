#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y, z;
    char kar;

    printf("Kalkulator Sederhana\n");
    printf("====================\n");
    printf("Masukkan bilangan pertama : ");
    scanf("%i", &x);
    fflush(stdin);
    printf("Masukkan bilangan kedua   : ");
    scanf("%i", &y);
    fflush(stdin);
    printf("\nMenu Matematika :\n");
    printf("1. Penjumlahan\n2. Pengurangan\n3. Pembagian\n4. Perkalian\n");
    printf("\nMasukkan pilihan Anda     : ");
    kar = getchar();

    printf("\n");
    if(kar=='1')
        printf("Hasil operasi tersebut = %i",z = x + y);
    else if(kar=='2')
        printf("Hasil operasi tersebut = %i",z = x - y);
    else if(kar=='3')
        printf("Hasil operasi tersebut = %i",z = x / y);
    else if(kar=='4')
        printf("Hasil operasi tersebut = %i",z = x * y);
    else
        printf("Harap masukkan pilihan yang sesuai! Ulangi aplikasi!");

    printf("\n");
    return 0;
}
