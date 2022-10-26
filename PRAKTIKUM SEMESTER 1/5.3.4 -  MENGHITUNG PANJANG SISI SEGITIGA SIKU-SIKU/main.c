#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159f

float sinus (float, float);
float radian (float);

int main()
{
    float sudut, sisi, hasil;

    puts("Menghitung Panjang Sisi Segitiga Siku-Siku");
    printf("Masukkan besar salah satu sudut selain sudut siku-siku : ");
    scanf("%g", &sudut);
    fflush(stdin);
    printf("Masukkan panjang sisi disebelah sudut tersebut (dalam meter) : ");
    scanf("%g", &sisi);
    fflush(stdin);

    if(sudut>=90){
        printf("\nUlangi Program!\n");
        exit(0);
    }else{
        hasil = sinus (sudut, sisi);
        printf("\nMaka panjang sisi di depan sudut tersebut adalah %g meter\n", hasil);
    }
    return 0;
}

float radian(float a){

    return(a/180.0f * PI);

}


float sinus(float sdt1, float pjg1){

    float sdt2, rad1, rad2, sin1, sin2, pjg2;

    sdt2 = 90 - sdt1;
    rad1 = radian(sdt1);
    rad2 = radian(sdt2);
    sin1 = sin(rad1);
    sin2 = sin(rad2);

    pjg2 = pjg1 * sin1 / sin2;

    return (pjg2);

}
