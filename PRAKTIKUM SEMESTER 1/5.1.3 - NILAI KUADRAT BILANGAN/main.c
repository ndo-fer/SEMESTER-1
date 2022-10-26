#include <stdio.h>
#include <stdlib.h>

float kuadrat(float);

int main()
{
    float x, total;

    printf("Menghitung Nilai Kuadrat Suatu Bilangan\n");
    printf("Masukkan bilangan : ");
    scanf("%g", &x);
    total = kuadrat(x);
    printf("Hasil Kuadrat %g adalah %g", x, total);

    return 0;
}

float kuadrat(float bil){

    return (bil * bil);

}
