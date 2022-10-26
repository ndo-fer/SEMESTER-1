#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil;
    printf("Menentukan Apakah Sebuah Bilangan Bulat adalah Ganjil atau Genap\n");
    printf("Masukkan bilangan bulat : ");
    scanf("%i", &bil);

    if(bil%2 == 0){
        printf("\n%i adalah bilangan genap.\n", bil);
    }
    else{
        printf("\n%i adalah bilangan ganjil.\n", bil);
    }
    return 0;
}
