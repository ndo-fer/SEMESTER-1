#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i, b;

    puts("Menampilkan n Bilangan Ganjil Pertama");
    printf("Masukkan angka : ");
    scanf("%i", &a);

    for (i=1; i<=a; i++){
        printf("%i ", b=i*2-1);
    }

    return 0;
}
