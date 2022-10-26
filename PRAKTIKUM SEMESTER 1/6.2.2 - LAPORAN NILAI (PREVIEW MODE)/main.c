#include <stdio.h>
#include <stdlib.h>

void cetak (float[]);
float rata (float[]);


int main()
{
    int i;
    float nilai[4][3] ={{81, 90, 62}, {50, 83, 87}, {89, 55, 65}, {77, 70, 92}};
    float rata2[3];

    for(i=0; i<3; i++){
    rata2[i] = rata(nilai[i]);
    }

    cetak(rata2);

    return 0;
}

void cetak (float rata2[]){

    int i;

    printf("No.Mhs       Rata-rata\n");
    printf("----------------------\n");
    for(i=0; i<4; i++){
        printf(" %i             %.2f\n", i+1, rata2[i]);
    }
    printf("----------------------\n");
}

float rata (float nilai[]){

    int i;

    float hasil=0;
    for(i=0; i<3; i++){
        hasil+=nilai[i];
    }

    return hasil/3;
}


