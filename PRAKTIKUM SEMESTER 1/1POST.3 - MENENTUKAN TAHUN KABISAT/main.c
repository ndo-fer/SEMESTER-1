#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp;

    printf("MENENTUKAN TAHUN KABISAT\n\n");
    printf("Masukkan tahun : ");
    scanf("%i", &inp);

    if(inp%4==0)
    {
        if(inp%400==0)
            printf("%i adalah tahun kabisat\n", inp);
        else if(inp%100==0)
            printf("%i bukan tahun kabisat\n", inp);
        else
            printf("%i adalah tahun kabisat\n", inp);\
    }else
        printf("%i bukan tahun kabisat", inp);
    return 0;
}
