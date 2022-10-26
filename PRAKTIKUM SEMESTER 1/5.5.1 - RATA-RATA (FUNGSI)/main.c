#include <stdio.h>
#include <stdlib.h>

float masukan (int);
float average (float, int);


int main()
{
    int jumlah;
    float total;

    puts("Menghitung Rata-Rata");
    printf("Masukkan jumlah data yang akan diinputkan : ");
    scanf("%i", &jumlah);
    total = masukan(jumlah);
   // printf("Total nilai = %g\n", total);
    printf("\nRata-rata = %g\n", average(total, jumlah));

    return 0;
}

float masukan(int n){

    int i;
    float nilai[n], total=0;

    for(i=1; i<=n; i++){
        printf("Masukkan data ke-%i = ", i);
        scanf("%g", &nilai[i]);
        total+=nilai[i];
    }
    printf("Nilai yang Anda masukkan = ");
    printf("%g", nilai[1]);
    for(i=2; i<=n; i++)
        printf(", %g", nilai[i]);

        return total;
}

float average (float sum, int jmlh){

    return (sum / jmlh);

}
