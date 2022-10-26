#include <stdio.h>
#include <stdlib.h>

void input (float[]);
void cetak (float[]);

int byk, i;

int main()
{

    puts("Menampilkan Kembali Data Hasil Input User");
    printf("Masukkan banyak data yang akan Anda input : ");
    scanf("%i", &byk);

    float data[byk];

    input(data);
    cetak(data);

    return 0;

}
void input (float nilai[]){

    for(i=0; i<byk; i++){
        printf("Masukkan data ke-%i = ", i);
        scanf("%g", &nilai[i]);
    }
}

void cetak (float nilai[]){

    printf("Nilai yang Anda masukkan = ");
    printf("%g", nilai[0]);
    for(i=1; i<byk; i++)
        printf(", %g", nilai[i]);
}
