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

    switch (pil)
    {
        case '1' :
        printf("Pilihan Anda = Senin");
        break;

        case '2' :
        printf("Pilihan Anda = Selasa");
        break;

        case '3' :
        printf("Pilihan Anda = Rabu");

        case '4' :
        printf("Pilihan Anda = Kamis");
        break;

        case '5' :
        printf("Pilihan Anda = Jumat");
        break;

        case '6' :
        printf("Pilihan Anda = Sabtu");
        break;

        case '7' :
        printf("Pilihan Anda = Minggu");
        break;

        default:
        printf("Pilihan salah, harap ulang aplikasi!");
        break;
    }

    printf("\n");

    return 0;
}
