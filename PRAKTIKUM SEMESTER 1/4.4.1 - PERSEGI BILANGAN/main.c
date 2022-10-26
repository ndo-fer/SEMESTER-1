#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j, in;

    puts("PERSEGI BILANGAN\n");

    printf("Masukkan bilangan pembatas : ");
    scanf("%i", &in);

    for(i=1; i<=in; i++){
        for(j=1; j<=in; j++)
            printf("%i ", j);
    printf("\n");
    }
    return 0;
}
