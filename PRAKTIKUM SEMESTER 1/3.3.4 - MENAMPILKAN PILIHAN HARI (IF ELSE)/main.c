#include <stdio.h>
#include <stdlib.h>

int main()
{
    char pil;

    printf("Pilih hari yang Anda inginkan!\n");
    printf("1. Senin\n2. Selasa\n3. Rabu\n4. Kamis\n5. Jumat\n6. Sabtu\n7. Minggu\n\n");
    printf("Masukkan pilihan Anda : ");
    scanf("%c", &pil);

    printf("\n");

    if(pil=='1')
        printf("Pilihan Anda = Senin");
    else if(pil=='2')
        printf("Pilihan Anda = Selasa");
    else if(pil=='3')
        printf("Pilihan Anda = Rabu");
    else if(pil=='4')
        printf("Pilihan Anda = Kamis");
    else if(pil=='5')
        printf("Pilihan Anda = Jumat");
    else if(pil=='6')
        printf("Pilihan Anda = Sabtu");
    else if(pil=='7')
        printf("Pilihan Anda = Minggu");
    else
        printf("Pilihan salah, harap ulang aplikasi!");

    printf("\n");

    return 0;
}
