#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp, i, j;
    char jwb='t';

    puts("SEGITIGA BILANGAN\n");
    while(jwb=='t')
    {
        printf("Masukkan bilangan : ");
        scanf("%i", &inp);

        for(i=1; i<=inp; i++){
            for(j=1; j<=i; j++)
                printf("%3i ", i);
            printf("\n");
        }
        fflush(stdin);
        printf("Apakah ingin keluar (y/t)?");
        jwb = getchar();
        printf("\n");
    }
    while(jwb!='t' && jwb!='y')
        printf("Error ");

    return 0;
}
