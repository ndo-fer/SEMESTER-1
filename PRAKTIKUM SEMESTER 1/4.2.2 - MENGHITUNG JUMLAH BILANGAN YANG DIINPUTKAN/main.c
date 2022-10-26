#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bil=1, data, total=0;
    char jwb;

    printf("Menghitung Jumlah Bilangan\n");
    do{

        printf("Masukkan bilangan ke-%i : ", bil);
        scanf("%i", &data);
        bil++;

        total = total + data;

        fflush(stdin);
        printf("Mau memasukkan bilangan lagi? (y/t) ");
        jwb = getchar();

    }while(jwb=='y' || jwb=='Y');
    fflush(stdin);

    printf("Maka total bilangan yang Anda masukkan adalah = %i", total);


    return 0;
}
