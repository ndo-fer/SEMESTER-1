#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nilai;

    printf("Konversi Nilai Angka ke dalam Nilai Huruf.\n");
    printf("==========================================\n\n");
    printf("Masukkan nilai Anda : ");
    scanf("%f", &nilai);
    printf("\n");
    if(nilai <= 40)
        printf("Nilai huruf adalah E.\n");
    else if(nilai>>40 && nilai <= 55)
        printf("Nilai huruf adalah D.\n");
    else if(nilai>> 55 && nilai <=60)
        printf("Nilai huruf adalah C.\n");
    else if(nilai>>60 && nilai <= 80)
        printf("Nilai huruf adalah B.\n");
    else if(nilai>>80 && nilai <= 100)
        printf("Nilai huruf adalah A.\n");
    else
        printf("Serius dong!!!\n");
    return 0;
}
