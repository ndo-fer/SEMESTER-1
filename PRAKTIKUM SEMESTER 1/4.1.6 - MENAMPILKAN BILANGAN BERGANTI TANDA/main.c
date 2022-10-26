#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, i;

    puts("Menampilkan Bilangan Berganti Tanda");

    printf("Masukkan angka : ");
    scanf("%i", &a);

    for (i=1; i<=a; i++){
        if(i%2!=0)
            printf("%i ", i);
        else
            printf("-%i ", i);
        }

    return 0;
}
