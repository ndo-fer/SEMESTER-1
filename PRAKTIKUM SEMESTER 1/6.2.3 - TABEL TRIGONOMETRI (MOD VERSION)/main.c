#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159

float radian (float);
void hitung (float[], float[][3]);
void cetak (float[], float[][3]);

int i, j;

int main()
{
    float x[] = {0, 30, 60, 90, 120, 150, 180, 210, 240, 270, 300, 330, 360};
    float hasil[13][3];

    puts("      T A B E L   T R I G O N O M E T R I    ");
    hitung(x, hasil);
    cetak(x, hasil);

    puts("\n");

    return 0;
}

float radian(float a){

    return(a/180.0f * PI);

}

void hitung (float x[], float hasil[][3]){

    for(i=0; i<13; i++){
        for(j=0; j<3; j++){
            if(j==0){
                hasil[i][j]=sin(radian(x[i]));
                if(hasil[i][j]>-0.01f && hasil[i][j]<0.0f){
                    hasil[i][j] = abs(hasil[i][j]);
                }

            }
            else if(j==1){
                hasil[i][j]=cos(radian(x[i]));
                if(hasil[i][j]>-0.01f && hasil[i][j]<0.0f){
                    hasil[i][j] = abs(hasil[i][j]);
                }
            }
            else{
                if(hasil[i][1] != 0){
                    hasil[i][j]= hasil[i][0] / hasil[i][1];
                    if(hasil[i][j] == 0.0f){
                        hasil[i][j] = abs(hasil[i][j]);
                    }
                }
            }
        }
    }
}

void cetak (float x[], float     hasil[][3]){

    printf("________________________________________________\n");
    printf("|X      | SIN(X)     | COS(X)     | TAN(X)     |\n");
    printf("________________________________________________\n");

    for(i=0; i<13; i++){
        printf("|%-7g|", x[i]);
        for(j=0; j<3; j++){
            if(i!=3 && i!=9 || j!=2){
                printf(" %-11.2f|", hasil[i][j]);
            }
            else{
                printf(" undefined  |");
            }
        }
        puts("\n________________________________________________");

    }
}
