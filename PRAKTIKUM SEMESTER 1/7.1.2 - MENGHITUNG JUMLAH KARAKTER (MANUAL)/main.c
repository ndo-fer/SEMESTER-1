#include <stdio.h>
#include <stdlib.h>

int pjgstr (char[]);

int main()
{
    char input[99999];

    puts("Menghitung jumlah karakter yang diinputkan");
    printf("Masukkan teks/kalimat!\n");
    fgets(input, sizeof input, stdin);
    fflush(stdin);

    printf("Jumlah karakter = %i", pjgstr(input));

    return 0;
}

int pjgstr (char kar[]){

    int i=0;

    while(kar[i] != '\n'){
        i++;
    }

    return(i);

}
