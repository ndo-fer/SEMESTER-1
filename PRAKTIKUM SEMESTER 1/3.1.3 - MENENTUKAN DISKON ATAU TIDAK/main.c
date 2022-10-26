#include <stdio.h>
#include <stdlib.h>

int main()
{
    int harga, total;

    puts("Dapatkan Potongan Harga 5% setiap pembelian diatas Rp99.999,00!!");
    printf("Masukkan total belanjaan Anda : ");
    scanf("%i", &harga);

    if(harga >= 100000){
        total = harga*0.95f ;
        printf("Selamat, Anda mendapatkan diskon 5%%.\nTotal yang perlu Anda bayarkan adalah Rp%i,00", total);
        printf("\Anda hemat Rp%i,00\n", harga = harga - total );
    }
    else{
        printf("Total pembelian adalah Rp%i,00.\nAnda tidak mendapatkan diskon\n", harga);
    }
    return 0;
}
