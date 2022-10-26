#include <stdio.h>
#include <stdlib.h>

void input(int[]);
void findmax(int[]);

int byk;

int main()
{
    int data[99999];

    input(data);
    findmax(data);

    return 0;
}

void input (int data[]){

    int i;

    printf("Berapa data yang Anda ingin masukkan ? \n");
    printf("=> ");
    scanf("%i", &byk);

    for(i=0; i<byk; i++){
        printf("Data ke-%i = ", i+1);
        scanf("%i", &data[i]);
        fflush(stdin);
    }

}

void findmax (int data[]){

    int i, bsr=data[0];

    for(i=0; i<byk; i++){
        if(data[i]>bsr)
            bsr=data[i];
    }

    printf("Data terbesar = %i", bsr);
}
