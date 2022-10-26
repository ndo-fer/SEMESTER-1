#include <stdio.h>
#include <stdlib.h>

void fibonacci (int);

int main()
{
    int batas;

    puts("Menampilkan Deret Fibonacci dengan Batas Diinputkan User\n");
    printf("Masukkan batas : ");
    scanf("%i", &batas);
    fibonacci(batas);

    return 0;
}

void fibonacci (int bts){

    int i=0, fbc[bts];

    fbc[i] = 1;

    printf("\n%i ", 0);
    for(i=2; i<=bts; i++){
        fbc[i] = fbc[i-1] + fbc[i-2];
        printf("%i ", fbc[i]);
    }
    puts("");

}
