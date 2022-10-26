#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int a, b, c;
    float x1, x2, d;

    puts("Mencari Akar-Akar Persamaan Kuadrat dari Bentuk Umum ax^2 + bx + c = 0");
    printf("Masukkan nilai dengan format a b c : ");
    scanf("%i %i %i", &a, &b, &c);

    d = b*b - 4*a*c;
    if(d==0){
            x1 = -b / 2*a;
        printf("Persamaan tersebut memiliki D = 0\n");
        printf("Persamaan tersebut memiliki akar kembar x1 = x2 = %0.1f", x1);
    }
    else if(d>=1){
            x1 = (-b + sqrt(d)) / 2*a;
            x2 = (-b - sqrt(d)) / 2*a;
        printf("Persamaan tersebut memiliki D > 0\n");
        printf("Persamaan tersebut memiliki akar- akar:\n");
        printf("x1 = %0.3f\nx2 = %0.3f\n", x1, x2);
    }
    else{
            x1 = -b / 2*a + (sqrt(-d) / 2*a);
            x2 = -b / 2*a - (sqrt(-d) / 2*a);
        printf("Persamaan tersebut memiliki D < 0\n");
        printf("Persamaan tersebut memiliki akar- akar tidak riil / imajiner :\n");
        printf("x1 = %0.3fi\nx2 = %0.3fi\n", x1, x2);

    }
    return 0;
}
