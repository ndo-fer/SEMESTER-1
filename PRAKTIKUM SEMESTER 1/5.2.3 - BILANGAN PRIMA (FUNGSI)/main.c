#include <stdio.h>
#include <stdlib.h>

prima(int);

int main()
{
    int inp, res;

    puts("Mengecek Prima atau Tidak Suatu Bilangan");
    printf("Masukkan bilangan : ");
    scanf("%i", &inp);
    if(inp<=1){
        res = 0;
    }
    else
        res = prima (inp);
    if(res)
        printf("%i adalah bilangan prima", inp);
    else
        printf("%i bukan bilangan prima", inp);
    return 0;
}

prima(int bil){
    int i, hsl=1;

    for(i=2; i<=bil-1; i++){
        if(bil%i==0)
            hsl=0;
    }
    return (hsl);

}
