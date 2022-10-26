#include <stdio.h>
#include <stdlib.h>

int main()
{
    int data, total=0, max=-1e15, min=1e15;
    float bil=1.0, rata;
    char jwb;

    printf("Menghitung Jumlah dan Rata-Rata Bilangan\n");
    do{


        printf("\nMasukkan bilangan ke-%g : ", bil);
        scanf("%i", &data);
        bil++;

        total = total + data;
    if(data > max) max=data;
    if(data < min) min=data;

        fflush(stdin);
        printf("Mau memasukkan bilangan lagi? (y/t) ");
        jwb = getchar();

    }while(jwb=='y' || jwb=='Y');
    fflush(stdin);

        rata = total / (bil-1);

    printf("Maka total bilangan yang Anda masukkan adalah = %i", total);
    printf("\n\nRata-rata bilangan yang Anda masukkan adalah = %g\n", rata);
    printf("\nNilai maksimum bilangan yang Anda masukkan adalah = %i\n", max);
    printf("\nNilai minimum bilangan yang Anda masukkan adalah = %i\n\n", min);


    return 0;
}
