#include <stdio.h>
#include <stdlib.h>

int main()
{
    char scf[5], gts[5], fgts[5];

    puts("MAKSIMAL INPUT ADALAH 5 KARAKTER!");

    puts("Input :");
    printf("\ndengan scanf()\nMasukkan input lebih dari 5 karakter : ");
    scanf("%s", scf);
    fflush(stdin);

    printf("\ndengan gets()\nMasukkan input lebih dari 5 karakter : ");
    gets(gts);
    fflush(stdin);

    printf("\ndengan fgets()\nMasukkan input lebih dari 5 karakter : ");
    fgets(fgts, sizeof fgts, stdin);
    fflush(stdin);

    puts("\nOutput :");
    printf("Dengan scanf() : %s\n", scf);
    printf("Dengan gets()  : %s\n", gts);
    printf("Dengan fgets() : %s", fgts);


    return 0;
}
