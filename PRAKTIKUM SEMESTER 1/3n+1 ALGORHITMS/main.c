#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;

    printf("Input n : ");
    scanf("%i", &n);


    while(n != 1){
        if(n % 2 == 0){
            n /= 2;
            printf("%d ", n);
        } else {
            n = 3 * n + 1;
            printf("%d ", n);
        }
    }

    // printf("%i\n", n);


    return 0;
}
