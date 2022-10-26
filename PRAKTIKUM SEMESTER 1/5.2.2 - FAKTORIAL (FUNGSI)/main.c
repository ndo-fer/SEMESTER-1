#include <stdio.h>
#include <stdlib.h>

long int faktorial (long int);

int main()
{
    int i;
    long int inp, hasil;

    puts("Menghitung Faktorial");
    printf("Masukkan bilangan : ");
    scanf("%i", &inp);

    for(i=inp; i>0; i--){
        if(i!=inp)
            printf(" x %i", i);
        else
            printf("%i", i);
    }
    hasil = faktorial(inp);
    printf(" = %i\n", hasil);


    return 0;
}

long int faktorial(long int a){
    int i, faktor=1;

    for(i=1; i<=a; i++)
        faktor *= i;

    return (faktor);
}
