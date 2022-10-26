#include <stdio.h>
#include <stdlib.h>

int tambah (int,int);
int kurang (int,int);
int kali (int,int);
int bagi (int,int);
int modulo (int,int);
void menu (void);


int main()
{
    char ulang='y';

    while(ulang=='y' || ulang=='Y'){
        int pil;
        int bil1, bil2, hasil;

        printf("========KALKULATOR========\n");
        menu();
        printf("Masukkan pilihan : ");
        scanf("%i", &pil);
        fflush(stdin);

        printf("Masukkan 2 bilangan yang akan dioperasikan!\nPisahkan dengan koma : ");
        scanf("%d, %d", &bil1, &bil2);
        fflush(stdin);

        if(pil==1)
            hasil = tambah(bil1, bil2);
        else if(pil==2)
            hasil = kurang(bil1, bil2);
        else if(pil==3)
            hasil = kali(bil1, bil2);
        else if(pil==4)
            hasil = bagi(bil1, bil2);
        else if(pil==5)
            hasil = modulo(bil1, bil2);
        else{
            printf("Pilihan yang anda masukkan salah, ulangi aplikasi!\n");
            break;
        }

        printf("Hasil = %d\n", hasil);

        printf("Operasi lain (y/t) ?");
        scanf("%c", &ulang);
        fflush(stdin);
    }
    return 0;
}

int tambah (int tambah1, int tambah2){
    return (tambah1 + tambah2);
}

int kurang (int kurang1, int kurang2){
    return (kurang1 + kurang2);
}
int kali (int kali1, int kali2){
    return (kali1 * kali2);
}
int bagi (int bagi1, int bagi2){
    return (bagi1 / bagi2);
}
int modulo (int modulo1, int modulo2){
    return (modulo1 % modulo2);
}
void menu (void){
    printf("Pilih Operasi Yang Akan Dijalankan!\n");
    printf("1. Tambah\n2. Kurang\n3. Kali\n4. Bagi\n5. Sisa Bagi\n");
}
