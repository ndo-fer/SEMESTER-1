#include <stdio.h>
#include <stdlib.h>

int defmax(int, int);

int main()
{
    int x, y, big;

    puts("Menentukan Nilai Terbesar dari Dua Input User");
    printf("\nMasukkan dua bilangan, pisahkan dengan koma : ");
    scanf("%i, %i", &x, &y);
    big = defmax(x, y);

    if(big==0)
        printf("%i sebanding dengan %i\n", x, y);
    else
        printf("\nBilangan terbesar adalah %i\n", big);

    return 0;
}

int defmax(int a, int b){

    if(a==b)
        return (0);
    else if(a>b)
        return a;
    else
        return b;
}
