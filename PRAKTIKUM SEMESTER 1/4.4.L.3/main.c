#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, inp, hasil=0, hasil2=0;

    puts("Menghitung Nilai Faktorial\n");
    printf("Masukkan bilangan : ");
    scanf("%i", &inp);

    while(j<=inp){
        hasil2+=j;
        j++;
    }
    printf("Hasil faktorial %i adalaha %i", inp, hasil2);
    return 0;
}
