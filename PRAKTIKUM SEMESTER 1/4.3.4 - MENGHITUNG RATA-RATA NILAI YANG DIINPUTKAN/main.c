#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, nilai=0, maks = -1e10, min = 1e10, banyak;
    float total=0, rata;

    puts("Menghitung Rata-Rata Nilai yang  Diinputkan\n");
    printf("Masukkan banyak nilai yang akan dihitung : ");
    scanf("%i", &banyak);
    printf("\n");

    for(i=1; i<=banyak; i++)
    {
        printf("Masukkan nilai ke-%i : ", i);
        scanf("%i", &nilai);
        printf("\n");

        total=total+nilai;
        if(nilai>maks) maks=nilai;
        if(nilai<min) min=nilai;

        if(i==banyak)
        {
            rata = total/banyak;
            printf("Rata-rata nilai : %g\n", rata);
            printf("Nilai minimum   : %i\n", maks);
            printf("Nilai maksimum  : %i\n", min);
        }
    }

    return 0;
}
