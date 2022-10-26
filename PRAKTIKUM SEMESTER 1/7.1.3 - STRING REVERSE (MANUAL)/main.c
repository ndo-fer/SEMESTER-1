#include <stdio.h>
#include <stdlib.h>

int pjgstr (char[]);
void balikstr (int, char []);

int main()
{
    char input[99999];

    puts("Membalikkan Kalimat");
    printf("Masukkan teks/kalimat!\n");
    fgets(input, sizeof input, stdin);
    fflush(stdin);

    printf("Hasil kalimat setelah dibalik = ");
    balikstr(pjgstr(input), input);

    return 0;
}

int pjgstr (char kar[]){

    int i=0;
    while(kar[i] != '\n'){
        i++;
    }
    return(i);
}

void balikstr (int pjg, char input[]){

    int i=0;

    printf("%i", pjg);
    while(i < pjg){
        printf("%c", input[pjg-i-1]);
        i++;
    }
        printf("%i", pjg);

}
