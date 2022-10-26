#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp, i, j=0;
    char jwb='t';

    puts("POLA BILANGAN\n");

    while(jwb=='t')
    {
        printf("Masukkan bilangan : ");
        scanf("%i", &inp);
        printf("\n");

        for(i=1; i<=inp; i++)
        {
            j = j + i;
            printf("%i ", j);
        }
        j=0;
        printf("\n\n");
        fflush(stdin);
        printf("Apakah ingin keluar (y/t)?");
        jwb = getchar();
        printf("\n");
    }
    while(jwb!='t' && jwb!='y')
        printf("Error ");

    printf("Selesai.\n");
    return 0;
}
