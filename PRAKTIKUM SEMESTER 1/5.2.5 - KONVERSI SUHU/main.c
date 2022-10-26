#include <stdio.h>
#include <stdlib.h>

float konversi (float, char, char);

int main()
{
    float suhu, hasil;
    char awal, akhir;

    puts("Konversi Suhu");
    printf("Masukkan Nilai Awal Suhu : ");
    scanf("%g", &suhu);
    fflush(stdin);
    puts("Celcius = C\nFahrenheit = F\nReamur = R");
    printf("Satuan awal suhu : ");
    awal = getchar();
    fflush(stdin);
    printf("Satuan akhir suhu : ");
    akhir = getchar();

    hasil = konversi(suhu, awal, akhir);

    if(hasil==0)
        printf("Mulai Ulang Program!");
    else
        printf("%g derajat %c = %g derajat %c", suhu, awal, hasil, akhir);

    return 0;
}

float konversi (float temp, char b, char c){

    float res;

    if(b=='C' || b=='c'){
        if(c=='F' || c=='f')
            res = temp * 9/5 + 32;
        else if(c=='R' || c=='r')
            res =temp*4/5;
        else
            res = 0;
    }
    else if(b=='R' || b=='r'){
        if(c=='C' || c=='c')
            res =temp* 5/4;
        else if(c=='F' || c=='f')
            res =temp* 9/4 + 32;
        else
            res = 0;
    }

    else if(b=='F' || b=='f'){
        if(c=='C' || c=='c')
            res =(temp-32)* 5/9;
        else if(c=='R' || c=='r')
            res =(temp-32)* 4/9;
        else
            res = 0;
    }

    else
        res = 0;

    return(res);

}
