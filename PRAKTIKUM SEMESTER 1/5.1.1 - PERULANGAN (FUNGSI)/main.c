#include <stdio.h>
#include <stdlib.h>

void menu();

int main()
{
    int i, inp;

    printf("Masukkan jumlah pengulangan : ");
    scanf("%i", &inp);
    for(i=0; i<inp; i++)
        menu();
    return 0;
}

void menu(){
    printf("Pilihan Menu\n");
}
