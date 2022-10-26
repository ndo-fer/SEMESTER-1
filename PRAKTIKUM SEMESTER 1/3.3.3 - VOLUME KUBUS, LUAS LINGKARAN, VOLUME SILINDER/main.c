#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pil;
    float kubus, jari, tinggi, hasil;

    printf("Aplikasi Kalkulasi Sederhana\n");
    printf("============================\n\n");

    printf("Apa yang ingin Anda hitung?\n");
    printf("1. Volume Kubus\n2. Luas Lingkaran\n3. Volume Silinder\n\n");
    printf("Masukkan pilihan Anda : ");
    scanf("%c", &pil);

    printf("\n");

    switch (pil)
    {
        case '1' :
            printf("Masukkan panjang sisi kubus : ");
            scanf("%g", &kubus);
            hasil = kubus * kubus * kubus;
            printf("\nKubus dengan panjang sisi %g cm memiliki volume %g cm^3", kubus, hasil);
            break;
        case '2' :
            printf("Masukkan panjang jari-jari lingkaran : ");
            scanf("%g", &jari);
            hasil = jari * jari * 3.14;
            printf("\nLingkaran dengan panjang jari-jari %g cm memiliki volume %g cm^2", jari, hasil);
            break;
         case '3' :
            printf("Masukkan panjang jari-jari alas : ");
            scanf("%g", &jari);
            printf("Masukkan tinggi silinder : ");
            scanf("%g", &tinggi);
            hasil = jari*jari*tinggi*3.14;
            printf("\nSilinder dengan panjang jari-jari alas %g cm dan tinggi %g cm memiliki volume %g cm^3", jari, tinggi, hasil);
            break;
         default :
            printf("Masukkan pilihan yang benar, harap ulang aplikasi!");
    }
    printf("\n");
    return 0;
}
