#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, input;

    puts("Menampilkan Bilangan Ganjil kecuali Kelipatan 3 dimulai dari 1");
    printf("Masukkan batas bilangan : ");
    scanf("%i", &input);

    for(i=1; i<=input; i++){
        if(i%2==0 || i%3==0)
            continue;
        printf("%i ", i);
    }

    return 0;
}
