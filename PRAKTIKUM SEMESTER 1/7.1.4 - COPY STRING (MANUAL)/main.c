#include <stdio.h>
#include <stdlib.h>
#define MAKS 99999

void copystr (char[], char[]);

int i;

int main()
{
    char ori[MAKS], kw[MAKS];

    puts("COPY STRING DENGAN FUNGSI");
    printf("Masukkan Kalimat :\n=> ");
    fgets(ori, sizeof ori, stdin);

    copystr(ori, kw);

    printf("\nTeks ORI  : %s", ori);
    printf("Teks KW 2 : %s", kw);

    return 0;
}

void copystr (char ori[], char kw[]){

    int i=0;

    while(ori[i] != '\n'){
        kw[i] = ori [i];
        i++;
    }

}
