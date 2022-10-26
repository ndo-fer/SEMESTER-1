#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159f

float radian(float);

int main()
{
    float drjt, konv;

    puts("Mengkonversi Sudut dalam Derajat ke Radian");
    printf("Masukkan besar sudut : ");
    scanf("%g", &drjt);
    konv = radian(drjt);
    printf("%g derajat = %g radian", drjt, konv);
    return 0;
}

float radian(float a){

    return(a/180.0f * PI);
}
