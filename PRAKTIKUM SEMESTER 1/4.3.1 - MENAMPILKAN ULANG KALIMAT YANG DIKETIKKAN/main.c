#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar[0];

    while(printf("Ketik kalimat, akan selesai ketika Anda menekan Enter\n")){
    gets(kar);
        if(kar=='/n')
            break;

    printf("\n%s\n\n", kar);
    exit(0);
    }
    return 0;
}
