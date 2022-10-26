#include <stdio.h>
#include <stdlib.h>

int main()
{
    int harga, total;

    puts("Dapatkan Potongan Harga 5% setiap pembelian mulai dari Rp100.000,00!!\n");
    printf("Masukkan total belanjaan Anda : ");
    scanf("%i", &harga);

    if(harga >= 100000){
        total = harga*0.95f ;
        printf("\nSelamat, Anda mendapatkan diskon 5%%.\nTotal yang perlu Anda bayarkan adalah Rp%i,00\n", total);
        printf("\Anda hemat Rp%i,00\n", harga = harga - total );
    }
    else{
        printf("\nTotal pembelian adalah Rp%i,00.\n", harga);
    }
    return 0;
}
