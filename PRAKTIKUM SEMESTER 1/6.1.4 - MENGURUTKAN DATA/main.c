#include <stdio.h>
#include <stdlib.h>
#define MAKS 10

void input_urut (int[]);

int byk;

int main()
{
    printf("Berapa banyak data Anda (maks.10) ? ");
    scanf("%i", &byk);
    fflush(stdin);
    puts("");
    if(byk>10) byk=MAKS;

    int data[byk];

    input_urut(data);

    return 0;
}

void input_urut (int nilai[]){

    int i, bsr=-1;

    for(i=0; i<byk; i++){
        printf("Data ke-%i : ", i+1);
        scanf("%i", &nilai[i]);
        fflush(stdin);
        if(nilai[i]>bsr)
            bsr=nilai[i];
    }

    printf("\nMaka data terbesar adalah : %i\n", bsr);
}
