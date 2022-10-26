#include <stdio.h>
#include <stdlib.h>

float faktorial (float);
float permutasi (float, float);
float kombinasi (float, float);

float main()
{
    float n, r, kom, prm;

    puts("Menghitung Permutasi dan Kombinasi Pasangan Bilangan\n");
    printf("Masukkan dua bilangan, pisahkan dengan koma : ");
    scanf("%g, %g", &n, &r);

    kom = kombinasi (n,r);
    prm = permutasi (n,r);

   // printf("%g! = %g\n", n, faktorial(n));
    // printf("%g! = %g\n", r, faktorial(r));

    printf("%g C %g = %lg\n", n, r, kom);
    printf("%g P %g = %lg\n", n, r, prm);

    return 0;
}

float faktorial (float fkt){

    float hsl=1, i;

    for(i=1; i<=fkt; i++)
        hsl*=i;

    return hsl;

}

float permutasi (float n, float r){

    return (faktorial(n)/faktorial(n-r));

}

float kombinasi (float n, float r){

    return (faktorial(n)/faktorial(r)/(faktorial(n-r)));

}
