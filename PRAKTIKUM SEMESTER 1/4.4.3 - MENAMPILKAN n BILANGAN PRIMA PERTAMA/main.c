#include <stdio.h>
#include <stdlib.h>

int main()
{
    int inp, idx, bil, div, prima;
    char jwb='t';

    puts("Menampilkan n Bilangan Prima Pertama\n");

    while(jwb=='t')
    {
    bil=2;
    idx=1;
    printf("Masukkan n : ");
    scanf("%i", &inp);
    fflush(stdin);

        while(idx<=inp)
        {
            prima = 1;
            for(div=2; div<bil; div++){
                if(bil%div == 0){
                    prima = 0;
                }
            }
            if(prima){
                printf("%i ", bil);
                idx++;
            }
            bil++;
        }
        printf("\nApakah ingin keluar (y/t)?");
        jwb = getchar();
    }
    while(jwb!='t' && jwb!='y')
        printf("Error ");

    return 0;
}
