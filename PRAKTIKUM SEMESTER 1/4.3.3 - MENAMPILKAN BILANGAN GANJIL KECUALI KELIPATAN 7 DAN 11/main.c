#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, input;
    char batas;

    puts("Menampilkan Bilangan Ganjil kecuali Kelipatan 7 dan 11");
    printf("Masukkan bilangan : ");
    scanf("%i", &input);

    for(i=1; i<=input; i++){
            if(i%2==0 || i%7==0 || i%11==0)
                continue;
                if(i>100) break;
            printf("%i ", i);
        }

    return 0;
}
