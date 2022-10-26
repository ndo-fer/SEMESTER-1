#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil;

    puts("Menentukan Apakah Bilanganmu Terletak dalam Range 1 - 100 atau Bukan.");
    printf("Masukkan sembarang bilangan bulat : ");
    scanf("%i", &bil);

    if(bil>=1 && bil<=100){
        printf("%i terletak dalam range 1 - 100.\n", bil);
    }
    else
        printf("%i berada di luar range 1 - 100.\n", bil);

    return 0;
}
