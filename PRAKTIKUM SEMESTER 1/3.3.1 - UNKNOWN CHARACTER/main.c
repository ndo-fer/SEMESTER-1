#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letter;

    printf("Masukkan sembarang huruf : ");
    scanf("%c", &letter);

    printf("\n");

    switch(letter)
    {
        case 'X' :
            printf("sum = 0");
        break;

        case 'Z' :
            printf("valid_flag = 1");
        break;

        case 'A' :
            printf("sum = 1");
        break;

        default : printf("Unknown letter = %c\n", letter);
    }


    printf("\n");

    return 0;
}
