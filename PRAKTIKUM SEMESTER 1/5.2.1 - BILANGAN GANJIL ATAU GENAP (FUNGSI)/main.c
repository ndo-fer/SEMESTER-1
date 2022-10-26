#include <stdio.h>
#include <stdlib.h>

int ganjil(int);

int main()
{
    int inp, hasil;

    puts("Menentukan Bilangan Ganjil atau Genap");
    printf("Masukkan bilangan : ");
    scanf("%i", &inp);

    hasil = ganjil(inp);
    printf("%i adalah bilangan ", inp);
    if(hasilZ  )
        printf ("ganjil");
    else
        printf("genap");

    return 0;
}

ganjil(int x){

    if(x%2!=0)
        return (1);
    else
        return (0);
}
